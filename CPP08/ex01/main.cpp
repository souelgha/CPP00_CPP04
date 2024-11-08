/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:54:01 by sonouelg          #+#    #+#             */
/*   Updated: 2024/11/08 17:41:12 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


void test02()
{
	Span numbers(2);

	try
	{
	numbers.addNumber(10);
	numbers.addNumber(5);
	// numbers.addNumber(123);
	// numbers.addNumber(7);
	// numbers.addNumber(40);
	// numbers.addNumber(30);
	std::cout<< numbers.shortestSpan() << std::endl;
	std::cout<< numbers.longestSpan() << std::endl;
 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main ()
{
	
	test02();
	return(0);
}