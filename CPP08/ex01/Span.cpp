/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:02:19 by sonouelg          #+#    #+#             */
/*   Updated: 2024/11/07 18:40:17 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(int size): N(size)
{
	tab.reserve(N);
}
Span::~Span(){}
// Span::Span(const Span& copy)
// {
	
// }
// Span& Span::operator=(const Span& copy){}

void Span::addNumber(int num)
{
	tab.push_back(num);
	std::cout <<"num: " << num << " :: addnum " << tab.back()<< std::endl;
}
// void Span::display() const
// {
// 	for(unsigned int i = 0 ; i < this->N ; i++)
// 	{
// 		// if(this->tab[i] != 0)
// 			std::cout << tab[i] << std::endl;

// 		break;
// 	}
// }