/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:54:49 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/11 17:04:22 by sonouelg         ###   ########.fr       */
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
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	
	a = Fixed(1234.4321f);
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integrer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integrer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integrer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integrer" << std::endl;
	
	return (0);
}