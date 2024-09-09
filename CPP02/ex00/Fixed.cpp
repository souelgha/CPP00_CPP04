/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:22:28 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/09 15:18:00 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include"Fixed.hpp"

	Fixed::Fixed():value(0)
	{
		std::cout<< "Default constructor called" << std::endl;
	}
	Fixed::Fixed(const Fixed& other)
	{
		this->value = other.value;		
		std::cout<< "Copy constructor called" << std::endl;
		this->value = Fixed::getRawBits();
	}
	Fixed& Fixed::operator=(const Fixed& other)
	{
		if(this != &other)
		{
			this->value = other.value;		
		}
		std::cout<< "Copy assignment operator called" << std::endl;
		this->value = Fixed::getRawBits();
		return(*this);
	}
	Fixed::~Fixed()
	{
		std::cout<< "destructor called" << std::endl;
	}
	int Fixed::getRawBits(void) const
	{
		std::cout << "getRawbits member function called" << std::endl;
		return(this->value);
	}
	void Fixed::setRawBits(int const raw)
	{
		this->value=raw;
	}