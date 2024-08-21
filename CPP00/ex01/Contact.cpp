/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:41:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/19 13:25:57 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Contact.hpp"


Contact::Contact()
{

}
Contact::~Contact()
{
	 std::cout << "destruction des contacts" << std::endl;
}
std::string Contact:: getfstn()   ///lire la variable 
{
	return(this->_firstname);
}
void Contact::setfstn(std::string firstname) //modif la variable
{
	this-> _firstname = firstname;
}
std::string Contact:: getlstn()
{
	return(this-> _lastname);
}
void Contact::setlstn(std::string lastname) //modif la variable
{
	this-> _lastname= lastname;
}
std::string Contact:: getnkn()
{
	return(this-> _nickname);
}
void Contact::setnkn(std::string nickname) //modif la variable
{
	this-> _nickname= nickname;
}

std::string Contact:: getphone()
{
	return(this-> _phonenumber);
}
void Contact::setphone(std::string phonenumber) //modif la variable
{
	this-> _phonenumber = phonenumber;
}
std::string Contact:: getsecret()
{
	return(this-> _darkestsecret);
}
void Contact::setsecret(std::string darkestsecret) //modif la variable
{
	this-> _darkestsecret= darkestsecret;
}


