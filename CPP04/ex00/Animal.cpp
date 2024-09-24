/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:59:46 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/24 17:25:45 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << GREEN << "[Animal] Constructeur par defaut." << WHITE<< std::endl;
}
Animal::Animal(const std::string type): _type(type)
{
	std::cout << GREEN << "[Animal] Constructeur avec parametres." << WHITE<< std::endl;
}
Animal::Animal(const Animal& other)
{
	this->_type=other._type;
	std::cout << GREEN << "[Animal] Constructeur par copie." << WHITE<< std::endl;
}
Animal& Animal::operator=(const Animal& other)
{
	if(this != &other)
		this->_type = other._type;
	std::cout << GREEN << "[Animal] Constructeur par assignation." << WHITE<< std::endl;
	return(*this);
}
Animal::~Animal()
{
	std::cout << GREEN << "[Animal] Destructeur par defaut." << WHITE<< std::endl;
}
void Animal::makeSound(void) const
{
	std::cout << GREEN << "[Animal] sound is : Meuuuuuhhhhhhh." << WHITE<< std::endl;
}
std::string Animal::getType() const
{
	return(this->_type);
}