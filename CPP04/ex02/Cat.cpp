/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:35:48 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/25 14:48:41 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
Cat::Cat(): Animal("Cat")
{
	CatBrain = new Brain();
	std::cout << YELLOW << "[Cat] Constructeur par defaut appele." << WHITE<< std::endl;
}
Cat::Cat(const std::string type): Animal(type)
{
	CatBrain = new Brain();
	this->_type= "Cat";
	std::cout << "type cat == " << this->_type << std::endl;
	std::cout << YELLOW << "[Cat] Constructeur avec parametres appele." << WHITE<< std::endl;
}
Cat::Cat(const Cat& other): Animal(other)
{
	CatBrain = new Brain(*other.CatBrain);
	this->_type=other._type;
		
	std::cout << YELLOW << "[Cat] Constructeur par copie appele." << WHITE<< std::endl;
}
Cat& Cat::operator=(const Cat& other)
{
	if(this != &other)
	{
		delete CatBrain;
		CatBrain = new Brain(*other.CatBrain);
		Animal::operator=(other);
	}
	std::cout << YELLOW << "[Cat] Constructeur par assignation appele." << WHITE<< std::endl;
	return(*this);
}
Cat::~Cat()
{
	delete CatBrain;
	std::cout << YELLOW << "[Cat] Destructeur par defaut appele." << WHITE<< std::endl;
}
void Cat::makeSound(void) const
{
	std::cout << YELLOW << "[Cat] sound is : Miaooouuuuuu " << WHITE<< std::endl;
}
std::string Cat::getIdea(int index ) const
{
	return(CatBrain->getIdea(index));
}