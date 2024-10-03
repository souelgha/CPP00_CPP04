/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:42:37 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/03 14:55:33 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
	this->_Name ="unknown";
	this->Hit_points = 100;
	this->Energy_points= 100;
	this->Attack_damage = 30;
	std::cout << CYAN << "[FragTrap] constructeur par defaut de "  << this->_Name  << WHITE <<std::endl;
}
FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->Hit_points = 100;
	this->Energy_points= 100;
	this->Attack_damage = 30;
	std::cout << CYAN <<"[FragTrap] constructeur avec parametres de "  << this->_Name << WHITE << std::endl;
}
FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout << CYAN <<"[FragTrap] constructeur de copie de "<< this->_Name << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if(this == &other)
		return(*this);
	ClapTrap::operator=(other);
	std::cout << CYAN <<"[FragTrap] constructeur d assignation de " << this->_Name << WHITE << std::endl;
	return(*this);
}
FragTrap::~FragTrap()
{
	std::cout << CYAN <<"[FragTrap] destructeur par defaut de " << this->_Name << WHITE << std::endl;
}
void FragTrap::attack(const std::string& target)
{
	if(this->Hit_points == 0 || this->Energy_points == 0)
	{
		std::cout << CYAN << "FragTrap " << this->_Name << " is already dead. No attack possible" << WHITE << std::endl;
		return;
	}
	std::cout << CYAN << "FragTrap " << this->_Name << " attacks " << target;
	std::cout << " causing " << this->Attack_damage << " points of damage !" << WHITE << std::endl;
	this->Energy_points--;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << CYAN  << "FragTrap " << getName()<< " gives a FiveGuys check!"  << WHITE << std::endl;
}