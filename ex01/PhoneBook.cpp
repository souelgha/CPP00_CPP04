/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:41:47 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/05 18:51:04 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"PhoneBook.hpp"


PhoneBook::PhoneBook()
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
	std::cout <<" le nombre maximum de contact autorise est 8" << std::endl;
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

void PhoneBook::DisplayOne(int index)
{
	if (index < 0)
	{
		std::cout << "error_no contact\n" << std::endl;
		return;
	}
	std::cout << "Index " << this->_index % 8 - 1;
	std::cout << "First Name: " << this->_contacts[index].getfstn() ;
	std::cout << "Last Name: " << this->_contacts[index].getlstn() ;
	std::cout << "Nick Name: " << this->_contacts[index].getlstn() ;
	
}
void PhoneBook::DisplayAll(Contact contact)
{
	std::cout << std::right << std::setw(10) << std::setfill(' ') << "Index:"<< " |";
	std::cout << "Index: " << this->_index % 8 - 1;
	std::cout << "First Name: " << this->_contacts[_index % 8].getfstn() ;
	std::cout << "Last Name: " << this->_contacts[_index % 8].getlstn() ;
	std::cout << "Nick Name: " << this->_contacts[_index % 8].getlstn() ;



	std::cout << "Index: " << this->_index % 8 - 1;
	std::cout << "First Name: " << this->_contacts[_index % 8].getfstn();
	std::cout << "Last Name: " << this->_contacts[_index % 8].getlstn();
	std::cout << "Nick Name: " << this->_contacts[_index % 8].getlstn() ;
}
/**** realisation des colonnes ******/
void PhoneBook::Displaytest()
{
	std::cout << std::right << std::setw(11) << std::setfill(' ') << "Index" << "|";
	std::cout << std::right << std::setw(11) << std::setfill(' ') << "First Name" << "|";
	std::cout << std::right << std::setw(11) << std::setfill(' ') << "Last Name" << "|";
	std::cout << std::right << std::setw(11) << std::setfill(' ') << "nicky444tttyyName" << "|" << std::endl;

	std::cout << std::right << std::setw(11) << "Index" << "|";
	std::cout << std::right << std::setw(11) << "First Name" << "|";
	std::cout << std::right << std::setw(11) << "Last Name" << "|";
	std::cout << std::right << std::setw(11) << "ni444ckytttyyName" << "|" << std::endl;
}