/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:41:47 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/04 09:33:42 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"
#include"PhoneBook_utils.hpp"


PhoneBook::PhoneBook()
{
	this-> _index = 0;
}
PhoneBook::~PhoneBook()
{
	std::cout << "\nThank you and GoodBye" << std::endl;
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
			this->_contacts[this->_index % MAXCONT].setfstn(trim(str));
	}
	str="";
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter the last name: "; 
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % MAXCONT].setlstn(trim(str));
	}
	str="";
	while(!std::cin.eof() && str == "")
	{
		std::cout << "Enter the nick name: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % MAXCONT].setnkn(trim(str));
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
	std::cout << "\nContact added!\n" << std::endl;
	this->_index++;
}

void PhoneBook::DisplayOne(int index)
{
	std::cout << "first name:\t" << this->_contacts[index].getfstn() << std::endl;
	std::cout << "last name:\t" << this->_contacts[index].getlstn() << std::endl ;
	std::cout << "nick name:\t" << this->_contacts[index].getnkn() << std::endl;
	std::cout << "phone number:\t"  << this->_contacts[index].getphone() << std::endl;
	std::cout << "darkest secret:\t" << this->_contacts[index].getsecret() << std::endl;	
}

void PhoneBook::Search()
{
	if(this->_index == 0)
	{
		std::cout << "Phonebook is empty. Add contact first"<< std::endl;
		return;
	}
	PhoneBook::Displaycategory();	
	std::string str ;
	std::cout << "Enter requested index: ";
	std::getline(std::cin, str);
	int lim = (this->_index > MAXCONT) ? MAXCONT : this->_index;
	if (str.length() != 1)
	{
		std::cout << "ERROR! Enter index between 0 and " << lim - 1 << std::endl;
		return;
	}
	if (!(std::isdigit(str[0])))
	{
		std::cout << "ERROR! Enter digit index between 0 and " << lim - 1 << std::endl;
		return;
	}
	int num;
	std::istringstream(str) >> num;
	if (num < 0 || num >= lim)
	{
		std::cout << "ERROR_NO CONTACT: Enter index between 0 and " << lim - 1 << std::endl;
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
	
	int lim = (this->_index > MAXCONT) ? MAXCONT : this->_index;
	for(int i = 0; i < lim; i++)
	{
		std::cout << "|" << std::right << std::setw(W) <<  i << "|";
		std::cout << std::right << std::setw(W) << truncated(this->_contacts[i].getfstn()) << "|";
		std::cout << std::right << std::setw(W) << truncated(this->_contacts[i].getlstn()) << "|";
		std::cout << std::right << std::setw(W) << truncated(this->_contacts[i].getnkn())  << "|";
		std::cout << std::endl;
	}
}

std::string PhoneBook::truncated(std::string str)
{
	if(str.length() > 10)
	{
		str.resize(9);
		str.resize(10,'.');
	}
	return (str);
}
