/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:42:37 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/30 17:47:56 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
	std::cout << CYAN << "[FragTrap] constructeur par default" << WHITE <<std::endl;
}
FragTrap::FragTrap(std::string Name): ClapTrap(Name)
{
	this->Hit_points = 100;
	this->Energy_points= 100;
	this->Attack_damage = 30;
	std::cout << CYAN <<"[FragTrap] constructeur avec parametres" << WHITE << std::endl;
}
FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout << CYAN <<"[FragTrap] constructeur de copie" << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if(this == &other)
		return(*this);
	this->_Name = other._Name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	std::cout << CYAN <<"[FragTrap] constructeur d assignation de copie" << WHITE << std::endl;
	return(*this);
}
FragTrap::~FragTrap()
{
	std::cout << CYAN <<"[FragTrap] destructeur par default" << WHITE << std::endl;
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
	std::cout << CYAN << getName() << " gives a FiveGuys check!" << WHITE << std::endl;
}