/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:17:04 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/25 16:36:25 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"
WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << RED << "[WrongCat] Constructeur par defaut appele." << WHITE<< std::endl;
}
WrongCat::WrongCat(const std::string type): WrongAnimal(type)
{
	this->_type= "WrongCat";
	std::cout << "type WrongCat == " << this->_type << std::endl;
	std::cout << RED << "[WrongCat] Constructeur avec parametres appele." << WHITE<< std::endl;
}
WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other)
{
	std::cout << RED << "[WrongCat] Constructeur par copie appele." << WHITE<< std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if(this != &other)
		WrongAnimal::operator=(other);
	std::cout << RED << "[WrongCat] Constructeur par assignation appele." << WHITE<< std::endl;
	return(*this);
}
WrongCat::~WrongCat()
{
	std::cout << RED << "[WrongCat] Destructeur par defaut appele." << WHITE<< std::endl;
}
void WrongCat::makeSound(void) const
{
	std::cout << RED << "[WrongCat] sound is : Miaooouuuu " << WHITE<< std::endl;
}
