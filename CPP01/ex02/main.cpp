/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:14:30 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/06 11:43:45 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
#include<string>
# define CYAN "\001\033[0;36m\002"
# define YELLOW "\001\033[0;93m\002"
# define DEFAULT "\001\033[0;39m\002"

int main(void)
{
	std::string str="HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string& stringREF = str; 

	/************** les adresses ************/
	std::cout << YELLOW ;
	std::cout << "adresse de la string : \t\t\t" << &str << std::endl;
	std::cout << "adresse stockee dans stringPTR : \t" << stringPTR << std::endl;
	std::cout << "adresse stockee dans stringREF : \t" << &stringREF << std::endl;
	std::cout << DEFAULT << std::endl;

	/*************** les valeurs ************/

	std::cout << "valeur de la string : \t\t" << str << std::endl;
	std::cout << "valeur pointee par stringPTR : \t" << *stringPTR << std::endl;
	std::cout << "valeur pointee par stringREF : \t" << stringREF << std::endl;
	
return(0);
}
