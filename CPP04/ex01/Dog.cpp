/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:43:56 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/01 11:02:49 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal("Dog")
{
	DogBrain = new Brain();
	std::cout << MAGENTA << "[Dog] default constructor with Brain." << WHITE<< std::endl;
}
Dog::Dog(const std::string type): Animal(type)
{
	DogBrain = new Brain();
	this->_type= "Dog";
	std::cout << "type Dog == " << this->_type << std::endl;
	std::cout << MAGENTA << "[Dog] constructor with parameter with Brain." << WHITE<< std::endl;
}
Dog::Dog(const Dog& other): Animal(other)
{
	this->DogBrain= new Brain(*other.DogBrain);
	std::cout << MAGENTA << "[Dog] Copy constructor with Brain." << WHITE<< std::endl;
}
Dog& Dog::operator=(const Dog& other)
{
	if(this != &other)
	{
		delete DogBrain;
		this->DogBrain = new Brain(*other.DogBrain);
		Animal::operator=(other);
	}
		
	std::cout << MAGENTA << "[Dog]  assignment constructor with Brain." << WHITE<< std::endl;
	return(*this);
}
Dog::~Dog()
{
	delete DogBrain;
	std::cout << MAGENTA << "[Dog] Destructor with Brain." << WHITE<< std::endl;
}
void Dog::makeSound(void) const
{
	std::cout << MAGENTA << "[Dog] sound is : WafffWaff " << WHITE<< std::endl;
}
Brain * Dog::getBrain() const
{
	return(DogBrain);
}