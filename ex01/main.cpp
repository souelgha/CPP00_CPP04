/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:19:39 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/07 16:45:25 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

int command()
{
	PhoneBook newbook;
	std::string command;
	while (!std::cin.eof())
	{ 
		std::cout << "Enter an option: " ;
		std::cout << "ADD => add new contact, ";
		std::cout << "SEARCH => search contact, ";
		std::cout << "EXIT => quit the prog." << std::endl;
		if (!(std::getline(std::cin, command)))
			return (1);	
		if(command.compare("ADD") == 0)
			newbook.add();
		else if(command.compare("SEARCH") == 0)
			newbook.Search();
		else if(command.compare("EXIT") == 0)
			break;
		else
			std::cout << "\nERROR:Invalid option. Retry"<< std::endl;	
	}
	return (0);
}

int main()
{
	command();
	return(0);
}