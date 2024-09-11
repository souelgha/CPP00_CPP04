/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:54:33 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/11 18:29:29 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FIXED_H
	#define FIXED_H

#include<iostream>
#include<string>
#include<cmath>
class Fixed
{
	private:
		__int32_t value;   
		static const int fract_bit = 8; 
	
	public:
		Fixed();
		Fixed(int a);
		Fixed(float b);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		float toFloat(void) const;
		int toInt(void) const;		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		// Fixed& operator>(const Fixed& other);
		// Fixed& operator<(const Fixed& other);
		// Fixed& operator>=(const Fixed& other);
		// Fixed& operator<=(const Fixed& other);
		// Fixed& operator==(const Fixed& other);
		// Fixed& operator!=(const Fixed& other);
		// Fixed& operator+(const Fixed& other);
		// Fixed& operator-(const Fixed& other);
		// Fixed& operator*(const Fixed& other);
		// Fixed& operator/(const Fixed& other);
		Fixed& operator++();
		Fixed& operator++(int);
		// Fixed& operator--();
		// Fixed& operator--(int);
};
std::ostream& operator<<(std::ostream& os, const Fixed& a);


#endif
