/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:43:56 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/03 17:56:21 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << MAGENTA << "[Dog] Constructeur par defaut appele." << WHITE<< std::endl;
}
Dog::Dog(const std::string type): Animal(type)
{
	this->_type= "Dog";
	std::cout << MAGENTA << "[Dog] Constructeur avec parametres appele." << WHITE<< std::endl;
}
Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << MAGENTA << "[Dog] Constructeur par copie appele." << WHITE<< std::endl;
}
Dog& Dog::operator=(const Dog& other)
{
	if(this != &other)
		Animal::operator=(other);
	std::cout << MAGENTA << "[Dog] Constructeur par assignation appele." << WHITE<< std::endl;
	return(*this);
}
Dog::~Dog()
{
	std::cout << MAGENTA << "[Dog] Destructeur par defaut appele." << WHITE<< std::endl;
}
void Dog::makeSound(void) const
{
	std::cout << MAGENTA << "[Dog] sound is : WafffWaff " << WHITE<< std::endl;
}
