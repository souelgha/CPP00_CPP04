/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:15:01 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/25 13:53:56 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << CYAN << "[WrongAnimal] Constructeur par defaut appele." << WHITE<< std::endl;
}
WrongAnimal::WrongAnimal(const std::string type): _type(type)
{
	std::cout << CYAN << "[WrongAnimal] Constructeur avec parametres appele." << WHITE<< std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	this->_type=other._type;
	std::cout << CYAN << "[WrongAnimal] Constructeur par copie appele." << WHITE<< std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if(this != &other)
		this->_type = other._type;
	std::cout << CYAN << "[WrongAnimal] Constructeur par assignation appele." << WHITE<< std::endl;
	return(*this);
}
WrongAnimal::~WrongAnimal()
{
	std::cout << CYAN << "[WrongAnimal] Destructeur par defaut appele." << WHITE<< std::endl;
}
void WrongAnimal::makeSound(void) const
{
	std::cout << CYAN << "[WrongAnimal] sound is : Bahhhhhhhhh." << WHITE<< std::endl;
}
std::string WrongAnimal::getType() const
{
	return(this->_type);
}