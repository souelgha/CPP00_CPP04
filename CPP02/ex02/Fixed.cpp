/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:54:43 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/11 18:30:30 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



	#include"Fixed.hpp"

	Fixed::Fixed():value(0)
	{
		// std::cout<< "Default fixed value : " << value << std::endl;
		// std::cout<< "Default constructor called" << std::endl;
	}
	Fixed::Fixed(const int inta)
	{
		value = inta << fract_bit ;
	//	std::cout<< "Int fixed value : " << value << std::endl;
		std::cout<< "Int constructor called" << std::endl;
	}
	Fixed::Fixed(const float val_float)
	{
		value = roundf(val_float *(1 << fract_bit)) ;
		// std::cout<< "Float fixed value : " << value << std::endl;
		// std::cout<< "Float constructor called" << std::endl;
	}
	Fixed::Fixed(const Fixed& other)
	{
		setRawBits(other.value);		
		// std::cout<< "Copy constructor called" << std::endl;;
	}
	Fixed& Fixed::operator=(const Fixed& other)
	{
		if(this != &other)
			setRawBits(other.value);
		// std::cout<< "Copy assignment operator called" << std::endl;
		return(*this);
	}
	int Fixed::getRawBits(void) const
	{
		return(this->value);
	}
	void Fixed::setRawBits(int const raw)
	{
		this->value=raw;
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
	Fixed& Fixed::operator++()
	{
		value += fract_bit;
		return(*this);
	}
	Fixed& Fixed::operator++(int)
	{
		Fixed temp = *this;
		value += fract_bit;
		return(temp);
	}