/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:49:12 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/05 17:42:04 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
	std::cout << WHITE << "[Cure] default constructor called " << WHITE << std::endl;
}
Cure::Cure(std::string const& type):AMateria(type)
{
	this->_type="cure";
	std::cout << WHITE << "[Cure] para constructor called "  << WHITE  << std::endl;
}
Cure::~Cure()
{
	std::cout << WHITE << "[Cure] destructor called "  << WHITE  << std::endl;
}
Cure::Cure(const Cure& other):AMateria(other)
{
	std::cout << WHITE  << "[Cure] copy constructor called "  << WHITE  << std::endl;
}
Cure& Cure::operator=(const Cure& other)
{
	if(this != &other)
		AMateria::operator=(other);
	std::cout  << WHITE << "[Cure] assign constructor called "  << WHITE  << std::endl;
	return(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << RED << "* heals " << target.getName() << " ’s wounds *" << WHITE<< std::endl;
}

AMateria* Cure::clone() const
{
	return(new Cure(*this));
}