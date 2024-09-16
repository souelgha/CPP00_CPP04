/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:54:33 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/16 17:27:09 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
	#define FIXED_H

#include<iostream>
#include<string>
#include<cmath>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define MAG "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[1;37m"

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

		bool operator>(const Fixed& other);
		bool operator<(const Fixed& other);
		bool operator>=(const Fixed& other);
		bool operator<=(const Fixed& other);
		bool operator==(const Fixed& other);
		bool operator!=(const Fixed& other);
		
		Fixed operator+(const Fixed& other);
		Fixed operator-(const Fixed& other);
		Fixed operator*(const Fixed& other);
		Fixed operator/(const Fixed& other);
		
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		static const Fixed&  min(const Fixed& a, const Fixed& b);
		static Fixed&  min(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
		static Fixed&  max(Fixed& a, Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& a);

#endif
