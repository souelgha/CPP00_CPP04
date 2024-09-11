/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:54:50 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/11 18:13:17 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& a)
{
	os << a.toFloat();
	return(os);
}

int main(void)
{
	Fixed a;
	// Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "a is " << a << std::endl;
	std::cout << "++a is " << ++a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "a++ is " << a++ << std::endl;
	std::cout << "a is " << a << std::endl;

	// std::cout << "b is " << b << std::endl;

	// std::cout << "Fixedmax(a,b) " << Fixed::max(a,b) << std::endl;
		
	return (0);
}