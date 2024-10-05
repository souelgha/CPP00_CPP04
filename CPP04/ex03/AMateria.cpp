/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:18:40 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/05 13:49:32 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():_type("unknown")
{
		std::cout << GREEN << "[AMateria] default constructor called " << WHITE << std::endl;
}
AMateria::AMateria(std::string const &type):_type(type)
{
	std::cout << GREEN << "[AMateria] para constructor called " << WHITE << std::endl;
}
AMateria::~AMateria()
{
	std::cout << GREEN << "[AMateria] destructor called " << WHITE  << std::endl;
}
AMateria::AMateria(const AMateria &other)
{
	this->_type= other._type;
	std::cout << GREEN << "[AMateria] copy constructor called " << WHITE << std::endl;
}
AMateria& AMateria::operator=(const AMateria &other)
{
	if(this != &other)
		this->_type=other._type;
	std::cout << GREEN << "[AMateria] assign constructor called " << WHITE  << std::endl;
	return(*this);
}
std::string const& AMateria::getType() const
{
	return(this->_type);
}
void AMateria::use(ICharacter &target)
{
	std::cout << GREEN << "No ice , No Cure to " << target.getName() << " !" << WHITE <<std::endl;
}