/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:19:39 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/06 22:58:19 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

int command()
{
	PhoneBook newbook;
	std::string command;
	while (1)
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
			newbook.DisplayAll();
		else if(command.compare("EXIT") == 0)
			break;
		else
			std::cout << "\nERROR:Invalid option. Retry"<< std::endl;	
	}
	return (0);
}

int main()
{
	PhoneBook newbook;
	// newbook.Displaycategory();
	command();
	//int i=check_digits("1z3");
	//std::cout << i << std::endl;
	return(0);
}