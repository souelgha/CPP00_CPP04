/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:41:47 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/04 18:05:50 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"PhoneBook.hpp"


PhoneBook::PhoneBook(/* args */)
{
	this-> _index = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Thank you and GoodBye" << std::endl;
}
void PhoneBook::add()
{
	std::string str;

	str="";
	std::cout <<" le nombre maximum de contact autorise est de 8" << std::endl;
	if(this->_index > 7)
		std::cout << "Warning : nb contact > 8" << std::endl;
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter the first name: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].setfstn(str);

	}
	this->_index++;
}

void PhoneBook::search()
{
	
}
Contact	PhoneBook::getcontact(int index)
{
	return (this->_contacts[index % 8]);
}

void PhoneBook::DisplayOne(Contact contact)
{
	if (!contact.getfstn().size())
	{
		std::cout << "error_no contact\n" << std::endl;
		return;
	}
	std::cout << "First Name: " << contact.getfstn() << std::endl;
	
}

void PhoneBook::DisplayAll(Contact contact)
{
	
}