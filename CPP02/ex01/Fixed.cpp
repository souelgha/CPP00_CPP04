/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:22:28 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/10 17:43:25 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include"Fixed.hpp"

	Fixed::Fixed():value(0)
	{
		std::cout<< "Default fixed value : " << value << std::endl;
		std::cout<< "Default constructor called" << std::endl;
	}
	Fixed::Fixed(const int inta)
	{
		value = inta << fract_bit ;
		std::cout<< "Int fixed value : " << value << std::endl;
		std::cout<< "Int constructor called" << std::endl;
	}
	Fixed::Fixed(const float val_float)
	{
		value = roundf(val_float *(1 << fract_bit)) ;
		std::cout<< "Float fixed value : " << value << std::endl;
		std::cout<< "Float constructor called" << std::endl;
	}
	Fixed::Fixed(const Fixed& other)
	{
		this->value = other.value;		
		std::cout<< "Copy constructor called" << std::endl;;
	}
	Fixed& Fixed::operator=(const Fixed& other)
	{
		if(this != &other)
		{
			this->value = other.value;		
		}
		std::cout<< "Copy assignment operator called" << std::endl;
		return(*this);
	}
	int Fixed::getRawBits(void) const
	{
		return(this->value);
	}
	Fixed::~Fixed()
	{
		std::cout<< "destructor called" << std::endl;
	}

	int Fixed::toInt(void) const
	{
		return value >> fract_bit;
	}

	float Fixed::toFloat(void) const
	{
		return static_cast<float>(value) / (1 << fract_bit);
	}
	std::ostream& operator<<(std::ostream& os, const Fixed& a)
	{
		os << a.toFloat();
		return(os);
	}