/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:35:48 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/01 10:33:19 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
Cat::Cat(): Animal("Cat")
{
	std::cout << YELLOW << "[Cat] Constructeur par defaut appele." << WHITE<< std::endl;
}
Cat::Cat(const std::string type): Animal(type)
{
	this->_type= "Cat";
	std::cout << YELLOW << "[Cat] Constructeur avec parametres appele." << WHITE<< std::endl;
}
Cat::Cat(const Cat& other): Animal(other)
{
	std::cout << YELLOW << "[Cat] Constructeur par copie appele." << WHITE<< std::endl;
}
Cat& Cat::operator=(const Cat& other)
{
	if(this != &other)
		Animal::operator=(other);
	std::cout << YELLOW << "[Cat] Constructeur par assignation appele." << WHITE<< std::endl;
	return(*this);
}
Cat::~Cat()
{
	std::cout << YELLOW << "[Cat] Destructeur par defaut appele." << WHITE<< std::endl;
}
void Cat::makeSound(void) const
{
	std::cout << YELLOW << "[Cat] sound is : Miaooouuuuuu " << WHITE<< std::endl;
}