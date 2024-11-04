/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:34:37 by sonouelg          #+#    #+#             */
/*   Updated: 2024/11/04 17:43:20 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"


int main()
{
	char tab1[]={'a', 'b', 'c'};
	int tab2[]={1, 2, 3};
	double tab3[]= {1.6, 2.9, 3.1};

	std::cout<< "/***** Char before iter *****/"<< std::endl;
	for(size_t i = 0; i< 3; ++i)
		std::cout<< "tab["<<i<<"]="<< tab1[i] << std::endl;	
	::iter(tab1, 3, addtwo<char>);
	std::cout<< "/***** Char after iter *****/"<< std::endl;
	for(size_t i = 0; i< 3; ++i)
		std::cout<< "tab["<<i<<"]="<< tab1[i] << std::endl;	
	
	std::cout<< "/***** int before iter *****/"<< std::endl;
	for(size_t i = 0; i< 3; ++i)
		std::cout<< "tab["<<i<<"]="<< tab2[i] << std::endl;	
	::iter(tab2, 3, addtwo<int>);
	std::cout<< "/***** int after iter *****/"<< std::endl;
	for(size_t i = 0; i< 3; ++i)
		std::cout<< "tab["<<i<<"]="<< tab2[i] << std::endl;
	
	std::cout<< "/***** double before iter *****/"<< std::endl;
	for(size_t i = 0; i< 3; ++i)
		std::cout<< "tab["<<i<<"]="<< tab3[i] << std::endl;	
	::iter(tab3, 3, addtwo<double>);
	std::cout<< "/***** int after iter *****/"<< std::endl;
	for(size_t i = 0; i< 3; ++i)
		std::cout<< "tab["<<i<<"]="<< tab3[i] << std::endl;	
}