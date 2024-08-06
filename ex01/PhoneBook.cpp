/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:41:47 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/06 23:28:40 by sonia            ###   ########.fr       */
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
int check_digits(std::string str)
{
	for(std::string::iterator it=str.begin(); it!=str.end(); ++it)
	{
		if (!(std::isdigit(static_cast<unsigned char>(*it))))
		{
			std::cout << "Error Phone number: Enter digit between 0 and 9" << std::endl;
			return(0);
		}
	}
	return(1);
}

void PhoneBook::add()
{
	std::string str;
	str="";
	std::cout <<" Warning : max contact allows is " << MAXCONT << std::endl;
	if (this->_index > MAXCONT - 1)
	{
		std::string answer;
		std::cout << "Warning: nb contact > " << MAXCONT << std::endl;
		std::cout << "if you confirm, the oldest contact will be deleted\n";
		std::cout << "please confirm : yes/no"<< std::endl;
		std::getline(std::cin, answer);
		if(answer.compare("yes") != 0)
			return;
	}
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter the first name: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % MAXCONT].setfstn(str);
	}
	str="";
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter the last name: "; 
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % MAXCONT].setlstn(str);
	}
	str="";
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter the nick name: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % MAXCONT].setnkn(str);
	}
	str="";
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter the phone number: ";
		if (std::getline(std::cin, str) && str != "" && check_digits(str))
		{
			this->_contacts[this->_index % MAXCONT].setphone(str);
			break;	
		}
		else
			str="";
	}
	str="";
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter the darkest secret: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % MAXCONT].setsecret(str);
	}
	this->_index++;
}
std::string PhoneBook::truncated(std::string str)
{
	if(str.length() > 10)
	{
		str=str.substr(0,9);
		str += '.';
	}
	return (str);
}
Contact	PhoneBook::getcontact(int index)
{
	return (this->_contacts[index % MAXCONT]);
}
void PhoneBook::DisplayOne(int index)
{
	std::cout << "first name:\t" << this->_contacts[index].getfstn() << std::endl;
	std::cout << "last name:\t" << this->_contacts[index].getlstn() << std::endl ;
	std::cout << "nick name:\t" << this->_contacts[index].getnkn() << std::endl;
	std::cout << "phone number:\t"  << this->_contacts[index].getphone() << std::endl;
	std::cout << "darkest secret:\t" << this->_contacts[index].getsecret() << std::endl;	
}

void PhoneBook::DisplayAll()
{
	if(this->_index == 0)
	{
		std::cout << "Phonebook is empty. Add contact first"<< std::endl;
		return;
	}
	PhoneBook::Displaycategory();	
	std::string str;
	std::cout << "Enter requested index: ";
	std::getline(std::cin, str);
	if (str.length() != 1)
	{
		std::cout << "ERROR! Enter index between 0 and " << this->_index << std::endl;
		return;
	}
	if (!(std::isdigit(static_cast<unsigned char>(str[0]))))
	{
		std::cout << "ERROR! Enter index between 0 and " << this->_index << std::endl;
		return;
	}
	int num =stoi(str);
	if (num < 0 || num >= MAXCONT)
	{
		std::cout << "ERROR_no contact_retry: Enter index between 0 and " << this->_index << std::endl;
		return;
	}
	PhoneBook::DisplayOne(num);
}

/****** realisation des colonnes ******/
void PhoneBook::Displaycategory()
{
	std::cout << "|" << std::right << std::setw(W)  << "Index" << "|";
	std::cout << std::right << std::setw(W) << "First Name" << "|";
	std::cout << std::right << std::setw(W) << "Last Name" << "|";
	std::cout << std::right << std::setw(W) << "nick Name" << "|" << std::endl;	
	for(int i = 0; i < MAXCONT; i++)
	{
		std::cout << "|" << std::right << std::setw(W) <<  i << "|";
		std::cout << std::right << std::setw(W) << truncated(this->_contacts[i].getfstn()) << "|";
		std::cout << std::right << std::setw(W) << truncated(this->_contacts[i].getlstn()) << "|";
		std::cout << std::right << std::setw(W) << truncated(this->_contacts[i].getnkn())  << "|";
		std::cout << std::endl;
	}
}

