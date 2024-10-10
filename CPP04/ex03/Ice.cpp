/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:04:20 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/09 12:04:20 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
	// std::cout << "[Ice] default constructor called " << std::endl;
}
Ice::Ice(std::string const& type):AMateria(type)
{
	this->_type="ice";
	// std::cout << "[Ice] para constructor called " << std::endl;
}
Ice::~Ice()
{
	// std::cout << "[Ice] destructor called " << std::endl;
}
Ice::Ice(const Ice& other):AMateria(other)
{
	// std::cout << "[Ice] copy constructor called " << std::endl;
}
Ice& Ice::operator=(const Ice& other)
{
	if(this != &other)
		AMateria::operator=(other);
	// std::cout  << "[Ice] assign constructor called " << std::endl;
	return(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << RED << "* shoots an ice bolt at " << target.getName() << " *" << WHITE << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria *nvx = new Ice(*this);
	return(nvx);
}