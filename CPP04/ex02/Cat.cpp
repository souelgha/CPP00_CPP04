/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:35:48 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/05 11:26:48 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
Cat::Cat(): Animal("Cat")
{
	CatBrain = new Brain();
	std::cout << YELLOW << "[Cat] default constructor with Brain." << WHITE<< std::endl;
}
Cat::Cat(const std::string type): Animal(type)
{
	CatBrain = new Brain();
	this->_type= "Cat";
	std::cout << YELLOW << "[Cat] constructor with parameter with Brain." << WHITE<< std::endl;
}
Cat::Cat(const Cat& other): Animal(other)
{
	CatBrain = new Brain(*other.CatBrain);
	this->_type=other._type;
		
	std::cout << YELLOW << "[Cat] Copy constructor with Brain." << WHITE<< std::endl;
}
Cat& Cat::operator=(const Cat& other)
{
	if(this != &other)
	{
		Animal::operator=(other);
		delete this->CatBrain;	
		this->CatBrain = new Brain(*other.CatBrain);
	}
	std::cout << YELLOW << "[Cat] assignment constructor with Brain." << WHITE<< std::endl;
	return(*this);
}
Cat::~Cat()
{
	delete CatBrain;
	std::cout << YELLOW << "[Cat] Destructor with Brain." << WHITE<< std::endl;
}
void Cat::makeSound(void) const
{
	std::cout << YELLOW << "[Cat] sound is : Miaooouuuuuu " << WHITE<< std::endl;
}
Brain * Cat::getBrain() const
{
	return(CatBrain);
}