/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:14:30 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/02 13:56:42 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
#include<string>
int main(void)
{
	std::string str="HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string& stringREF = str; 

/************** les adresses ************/
	std::cout << "adresse de la string : " << &str << std::endl;
	std::cout << "adresse stockee dans stringPTR : " << stringPTR << std::endl;
	std::cout << "adresse stockee dans stringREF : " << &stringREF << std::endl;

/*************** les valeurs ************/

	std::cout << "valeur de la string : " << str << std::endl;
	std::cout << "valeur pointee par stringPTR : " << *stringPTR << std::endl;
	std::cout << "valeur pointee par stringREF : " << stringREF << std::endl;
	
return(0);
}
