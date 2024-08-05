/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:19:39 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/05 17:26:36 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

int command()
{
	PhoneBook newbook;
	std::string command;
	while (1)
	{ 
		std::cout << "entrer une commande :" ;
		std::cout << "ADD => ajout d un nouveau contact, ";
		std::cout << "SEARCH => rechercher un contact, ";
		std::cout << "EXIT => quitter le repertoire." << std::endl;
		if (!(std::getline(std::cin, command)))
			return (1);	
		if(command.compare("ADD") == 0)
			newbook.add();
		else if(command.compare("SEARCH") == 0)
			newbook.DisplayOne(0);
		else if(command.compare("EXIT") == 0)
			break;
		else
			std::cout << "\nle choix ne correspond pas a aucune option. veuillez recommencer\n"<< std::endl;
			
	}
	return (0);
}

int main()
{
	PhoneBook newbook;
	newbook.Displaytest();
	//command();
	return(0);
}