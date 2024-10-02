/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:49:12 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/02 17:48:27 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
	std::cout << "[Cure] default constructor called " << std::endl;
}
Cure::Cure(std::string const& type):AMateria(type)
{
	this->_type="cure";
	std::cout << "[Cure] para constructor called " << std::endl;
}
Cure::~Cure()
{
	std::cout << "[Cure] destructor called " << std::endl;
}
Cure::Cure(const Cure& other):AMateria(other)
{
	std::cout << "[Cure] copy constructor called " << std::endl;
}
Cure& Cure::operator=(const Cure& other)
{
	if(this != &other)
		AMateria::operator=(other);
	std::cout << "[Cure] assign constructor called " << std::endl;
	return(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << MAGENTA << "* heals " << target.getName() << " ’s wounds *" << WHITE<< std::endl;
}

AMateria* Cure::clone() const
{
	AMateria *nvx = new Cure(*this);
	return(nvx);
}