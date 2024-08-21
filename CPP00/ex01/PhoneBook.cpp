/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:41:47 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/07 17:25:18 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

int check_digits(std::string str);
std::string trim(const std::string str);

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

void PhoneBook::Search()
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
	int lim = (this->_index > MAXCONT) ? MAXCONT : this->_index;
	if (str.length() != 1)
	{
		std::cout << "ERROR! Enter index between 0 and " << lim - 1<< std::endl;
		return;
	}
	if (!(std::isdigit(static_cast<unsigned char>(str[0]))))
	{
		std::cout << "ERROR! Enter index between 0 and " << lim - 1<< std::endl;
		return;
	}
	int num =stoi(str);
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

/**** gestion des isspaces dans les entrees
 ***** utilisation de find et npos  
****** npos est vrai si toute la str est vide (conditions find_first_not_of ())
 */
std::string trim(const std::string str)
{
	std::string nospace;
	std::string whitespaces (" \t\f\v\n\r");
	size_t start = str.find_first_not_of(whitespaces);
	if(start == std::string::npos) 
		return(""); 
	nospace = str.substr(start);
	size_t end = nospace.find_last_not_of(whitespaces);		
	if( end != std::string::npos)
		nospace = nospace.substr(0, end + 1);
	return(nospace);
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
