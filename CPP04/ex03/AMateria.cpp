/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:18:40 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/02 17:28:38 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():_type("unknown")
{
		std::cout << "[AMateria] default constructor called " << std::endl;
}
AMateria::AMateria(std::string const &type):_type(type)
{
	std::cout << "[AMateria] para constructor called " << std::endl;
}
AMateria::~AMateria()
{
	std::cout << "[AMateria] destructor called " << std::endl;
}
AMateria::AMateria(const AMateria &other)
{
	this->_type= other._type;
	std::cout << "[AMateria] copy constructor called " << std::endl;
}
AMateria& AMateria::operator=(const AMateria &other)
{
	if(this != &other)
		this->_type=other._type;
	std::cout << "[AMateria] assign constructor called " << std::endl;
	return(*this);
}
std::string const& AMateria::getType() const
{
	return(this->_type);
}
void AMateria::use(ICharacter &target)
{
	std::cout << "No ice , No Cure to " << target.getName() << " !" << std::endl;
}