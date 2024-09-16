/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:54:43 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/16 14:57:19 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed():value(0){}
Fixed::Fixed(const int inta)
{
	value = inta << fract_bit ;
}
Fixed::Fixed(const float val_float)
{
	value = roundf(val_float *(1 << fract_bit)) ;
}
Fixed::Fixed(const Fixed& other)
{
	setRawBits(other.value);
}
Fixed& Fixed::operator=(const Fixed& other)
{
	if(this != &other)
		setRawBits(other.value);
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
Fixed::~Fixed(){}
int Fixed::toInt(void) const
{
	return value >> fract_bit;
}
float Fixed::toFloat(void) const
{
	return static_cast<float>(value) / (1 << fract_bit);
}
Fixed& Fixed::operator++(void)
{
	value += 1;
	return(*this);
}
Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	value += 1;
	return(temp);
}
Fixed& Fixed::operator--(void)
{
	value -= 1;
	return(*this);
}
Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	value -= 1;
	return(temp);
}
Fixed Fixed::operator+(const Fixed& other) 
{
	Fixed result;
	result.setRawBits( this->value + other.getRawBits());
	return(result);
}
Fixed Fixed::operator-(const Fixed& other) 
{
	Fixed result;
	result.setRawBits( this->value - other.getRawBits());
	return(result);
}
Fixed Fixed::operator*(const Fixed& other) 
{
	Fixed result;
	result.setRawBits(( this->value * other.getRawBits()) >> fract_bit);
	return(result);
}
Fixed Fixed::operator/(const Fixed& other) 
{
	Fixed result;
	result.setRawBits((this->value / other.getRawBits()) << fract_bit);
	return(result);
}
bool Fixed::operator>(const Fixed& other)
{
	return(this->value > other.getRawBits());
}
bool Fixed::operator<(const Fixed& other)
{
	return((this->value < other.getRawBits()));
}
bool Fixed::operator>=(const Fixed& other)
{
	return(this->value >= other.getRawBits());		
}
bool Fixed::operator<=(const Fixed& other)
{
	return(this->value <= other.getRawBits());
}
bool Fixed::operator==(const Fixed& other)
{
	return(this->value == other.getRawBits());
}
bool Fixed::operator!=(const Fixed& other)
{
	return(this->value != other.getRawBits());
}
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if ( a.operator<(b))
		return(a);
	else 
		return(b);
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if ( a.getRawBits() < b.getRawBits())
		return(a);
	else 
		return(b);
}
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if ( a.operator>(b))
		return(a);
	else 
		return(b);
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if ( a.getRawBits() > b.getRawBits())
		return(a);
	else 
		return(b);
}
std::ostream& operator<<(std::ostream& os, const Fixed& a)
{
	os << a.toFloat();	
	return(os);
}
