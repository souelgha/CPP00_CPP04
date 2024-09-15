/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:54:50 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/13 10:28:40 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


void incrementFct (void)
{
	Fixed a;

	std::cout << "a is " << a << std::endl;
	std::cout << "++a is " << ++a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "a++ is " << a++ << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "a++ is " << a++ << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "a-- is " << a-- << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "--a is " << --a << std::endl;
	std::cout << "a is " << a << std::endl;
}

void OpeArithmetic()
{
	Fixed a (20);
	Fixed c(2.02f);
	Fixed d(c);	
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed e (4);

	std::cout << "a:\t " << a << std::endl;
	std::cout << "b:\t " << b << std::endl;
	std::cout << "c:\t " << c << std::endl;
	std::cout << "d:\t " << d << std::endl;	
	std::cout << "e:\t " << e << std::endl;

	std::cout << "a + c : " << a + c << std::endl;
	std::cout << "a + op c : " << a.operator+(c) << std::endl;
	std::cout << "c + c : " << c + c << std::endl;
	std::cout << "c + a : " << c + a << std::endl;
	std::cout << "c + a + b: " << c + a + b << std::endl;
	std::cout << "d + c : " << d + c << std::endl;
	std::cout << "a - c : " <<  a - c << std::endl;
	std::cout << "c - a : " <<  c - a << std::endl;
	std::cout << "a * c : " << a * c << std::endl;
	std::cout << "c * a : " << c * a << std::endl;
	std::cout << "a / c : " << a / c << std::endl;
	std::cout << "c / a : " << c / a << std::endl;
	std::cout << "c * a / e : " << c * a / e << std::endl;
	std::cout << "c * a + e : " << c * a + e << std::endl;
	std::cout << "c *( a + e) : " << c * (a + e) << std::endl;
}
void OpeCompar()
{
	Fixed a (10);
	Fixed c(2.02f);
	Fixed d(c);	
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a:\t " << a << std::endl;
	std::cout << "b:\t " << b << std::endl;
	std::cout << "c:\t " << c << std::endl;
	std::cout << "d:\t " << d << std::endl;
	
	std::cout << " a > c ?: " << a.operator>(c)<< std::endl;
	std::cout << " a < c ?: " << a.operator<(c)<< std::endl;	
	std::cout << " a == c ?: " << a.operator==(c)<< std::endl;
	std::cout << " a <= c ?: " << a.operator<=(c)<< std::endl;
	std::cout << " a >= c ?: " << a.operator>=(c)<< std::endl;
	std::cout << " a != c ?: " << a.operator!=(c)<< std::endl;
	std::cout << " a > b ?: " << a.operator>(b)<< std::endl;
	std::cout << " a < b ?: " << a.operator<(b)<< std::endl;	
	std::cout << " a == b ?: " << a.operator==(b)<< std::endl;
	std::cout << " a <= b ?: " << a.operator<=(b)<< std::endl;
	std::cout << " a >= b ?: " << a.operator>=(b)<< std::endl;
	std::cout << " a != b ?: " << a.operator!=(b)<< std::endl;
	std::cout << " c > d ?: " << c.operator>(d)<< std::endl;
	std::cout << " c < d ?: " << c.operator<(d)<< std::endl;
	std::cout << " c == d ?: " << c.operator==(d)<< std::endl;
	std::cout << " c <= d ?: " << c.operator<=(d)<< std::endl;
	std::cout << " c >= d ?: " << c.operator>=(d)<< std::endl;
	std::cout << " c != d ?: " << c.operator!=(d)<< std::endl;
}
void OpeMaxMin()
{
	Fixed a (10);
	Fixed c(2.02f);
	Fixed d(c);	
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed  f( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed e (4);

	std::cout << "a:\t " << a << std::endl;
	std::cout << "b:\t " << b << std::endl;
	std::cout << "c:\t " << c << std::endl;
	std::cout << "d:\t " << d << std::endl;
	std::cout << "e:\t " << e << std::endl;
	std::cout << "f:\t " << f << std::endl;

	std::cout << "max(c,d)" << Fixed::max(c,d) << std::endl;
	std::cout << "max(a,b)" << Fixed::max(a,b) << std::endl;
	std::cout << "min(a,b)"  << Fixed::min(a,b) << std::endl;
	std::cout << "min(d,f)"  << Fixed::min(d,f) << std::endl;
	std::cout << "min(e,f)"  << Fixed::min(e,f) << std::endl;
}

int main(void)
{
	//OpeArithmetic();
	// OpeCompar();
	//incrementFct();
	OpeMaxMin();
		
	return (0);
}