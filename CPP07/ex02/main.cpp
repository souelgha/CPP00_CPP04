/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:22:01 by sonouelg          #+#    #+#             */
/*   Updated: 2024/11/05 18:22:49 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Array.hpp"

void test01()
{
	std::cout<<"\n/***** Int Array ******/"<< std::endl;
	int * a = new int();//init valeur par defaut 
	std::cout <<"*a= " << *a << std::endl;

	Array<int> intArray(3);
	std::cout<<"/***** before ******/"<< std::endl;
	std::cout << intArray<< std::endl;
	intArray[0] = 20;
	intArray[1] = 10;
	intArray[2] = 120;
	std::cout<<"/***** after ******/"<< std::endl;
	std::cout << intArray<< std::endl;
	try
	{
		intArray[-1] = 2;	
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		intArray[3] = 40; // out of range
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete a;
}
void test02()
{
	std::cout<<"\n/***** Char Array ******/"<< std::endl;
	Array<char> charArray(3);
	std::cout<<"/***** before ******/"<< std::endl;
	std::cout << charArray<< std::endl;
	charArray[0] = 't';
	charArray[1] = 'f';
	charArray[2] = 'r';
	std::cout<<"/***** after ******/"<< std::endl;
	std::cout << charArray<< std::endl;
}
void test03()
{
	std::cout<<"\n/***** string Array ******/"<< std::endl;
	Array<std::string> charArray(3);
	std::cout<<"/***** before ******/"<< std::endl;
	std::cout << charArray<< std::endl;
	charArray[0] = "toto";
	charArray[1] = "tata";
	charArray[2] = "titi";
	std::cout<<"/***** after ******/"<< std::endl;
	std::cout << charArray<< std::endl;
}

int main()
{
	test01();
	test02();
	test03();
	return(0);
}