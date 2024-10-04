/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:59:46 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/04 11:13:34 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << GREEN << "[Animal] Defaulf constructor called " << WHITE<< std::endl;
}
Animal::Animal(const std::string type): _type(type)
{
	std::cout << GREEN << "[Animal] para constructor called." << WHITE<< std::endl;
}
Animal::Animal(const Animal& other)
{
	this->_type=other._type;
	std::cout << GREEN << "[Animal] copy constructor called." << WHITE<< std::endl;
}
Animal& Animal::operator=(const Animal& other)
{
	if(this != &other)
		this->_type = other._type;
	std::cout << GREEN << "[Animal] assign constructor called." << WHITE<< std::endl;
	return(*this);
}
Animal::~Animal()
{
	std::cout << GREEN << "[Animal] Default destructor called." << WHITE<< std::endl;
}
void Animal::makeSound(void) const
{
	std::cout << GREEN << "[Animal] sound is : Meuuuuuhhhhhhh." << WHITE<< std::endl;
}
std::string Animal::getType() const
{
	return(this->_type);
}