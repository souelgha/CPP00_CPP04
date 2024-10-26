/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:46:56 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/26 15:04:22 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cout << "too few arguments"<< std::endl;
		return(1);
	}
		
	// Isprintable(argv[1]);	
	ScalarConverter::Convert(argv[1]);
	return(0);
}