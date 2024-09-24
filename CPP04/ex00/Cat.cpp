/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:35:48 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/24 17:41:46 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
Cat::Cat(): Animal("Cat")
{
	std::cout << YELLOW << "[Cat] Constructeur par defaut." << WHITE<< std::endl;
}
Cat::Cat(const std::string type): Animal(type)
{
	this->_type= "Cat";
	std::cout << "type cat == " << this->_type << std::endl;
	std::cout << YELLOW << "[Cat] Constructeur avec parametres." << WHITE<< std::endl;
}
Cat::Cat(const Cat& other): Animal(other)
{
	std::cout << YELLOW << "[Cat] Constructeur par copie." << WHITE<< std::endl;
}
Cat& Cat::operator=(const Cat& other)
{
	if(this != &other)
		Animal::operator=(other);
	std::cout << YELLOW << "[Cat] Constructeur par assignation." << WHITE<< std::endl;
	return(*this);
}
Cat::~Cat()
{
	std::cout << YELLOW << "[Cat] Destructeur par defaut." << WHITE<< std::endl;
}
void Cat::makeSound(void) const
{
	std::cout << YELLOW << "[Cat] sound is : Miaooouuuuuu " << WHITE<< std::endl;
}
// std::string Cat::getType() const
// {
// 	return(this->_type);
// }