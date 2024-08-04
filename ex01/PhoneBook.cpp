/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:41:47 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/04 22:47:27 by sonia            ###   ########.fr       */
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
	str="";
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter the last name: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].setlstn(str);
	}
	str="";
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter the nick name: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].setnkn(str);
	}
	str="";
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter the phone number: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].setphone(str);
	}
	str="";
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter the darkest secret: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].setsecret(str);
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