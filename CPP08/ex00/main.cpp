/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:54:01 by sonouelg          #+#    #+#             */
/*   Updated: 2024/11/06 18:28:33 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ()
{
	std::vector<int> numbers;
	
	numbers.push_back(2);
	numbers.push_back(5);
	numbers.push_back(123);
	numbers.push_back(5);
	numbers.push_back(40);
	
	try
	{
		std::vector<int>::const_iterator it = easyfind(numbers, 10);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}