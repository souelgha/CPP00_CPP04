/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:43:56 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/24 17:48:17 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << YELLOW << "[Dog] Constructeur par defaut." << WHITE<< std::endl;
}
Dog::Dog(const std::string type): Animal(type)
{
	this->_type= "Dog";
	std::cout << "type Dog == " << this->_type << std::endl;
	std::cout << YELLOW << "[Dog] Constructeur avec parametres." << WHITE<< std::endl;
}
Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << YELLOW << "[Dog] Constructeur par copie." << WHITE<< std::endl;
}
Dog& Dog::operator=(const Dog& other)
{
	if(this != &other)
		Animal::operator=(other);
	std::cout << YELLOW << "[Dog] Constructeur par assignation." << WHITE<< std::endl;
	return(*this);
}
Dog::~Dog()
{
	std::cout << YELLOW << "[Dog] Destructeur par defaut." << WHITE<< std::endl;
}
void Dog::makeSound(void) const
{
	std::cout << YELLOW << "[Dog] sound is : WafffWaff " << WHITE<< std::endl;
}
