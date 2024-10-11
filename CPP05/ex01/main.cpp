/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:39:48 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/11 18:30:30 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void test01()
{
	std::cout << "/***** test01: grade = 130 *****/" << std::endl;
	try
	{
		Bureaucrat T("Tom",130);
		T << std::cout;
	}
	catch(const std::exception& e){
		std::cerr << RED<< e.what() << WHITE << std::endl;

	}
	std::cout<< "\n";
}

// void test06()
// {
// 	std::cout << "/***** test06: test Form *****/" << std::endl;
// 	try
// 	{
// 		Bureaucrat T("Tom",5);
// 		std::cout << T << std::endl;
// 		T.DecrementGrade();
// 		std::cout << T << std::endl;
// 	}
// 	catch(const std::exception& e){
// 		std::cerr << RED<< e.what() << WHITE << std::endl;

// 	}
// 	std::cout<< "\n";
// }
int main()
{

	test01();
	// test06();

	return(0);
}