/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:37:00 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/23 13:08:38 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
	std::cout << YELLOW << "[ScavTrap] constructeur par default" << WHITE <<std::endl;
}
ScavTrap::ScavTrap(std::string nom): ClapTrap(nom)
{
	this->Hit_points = 100;
	this->Energy_points= 50;
	this->Attack_damage = 20;
	std::cout << YELLOW <<"[ScavTrap] constructeur avec parametres" << WHITE << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	this->Name = other.Name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	std::cout << YELLOW <<"[ScavTrap] constructeur de copie" << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	(void) other;
	std::cout << YELLOW <<"[ScavTrap] constructeur d assignation de copie" << WHITE << std::endl;
	return(*this);
}
ScavTrap::~ScavTrap()
{
	std::cout << YELLOW <<"[ScavTrap] destructeur par default" << WHITE << std::endl;
}
void ScavTrap::attack(const std::string& target)
{
	if(this->Hit_points == 0 || this->Energy_points == 0)
	{
		std::cout << YELLOW << "ScavTrap " << this->Name << " is already dead. No attack possible" << WHITE << std::endl;
		return;
	}
	std::cout << YELLOW << "ScavTrap " << this->Name << " attacks " << target;
	std::cout << " causing " << this->Attack_damage << " points of damage !" << WHITE << std::endl;
	this->Energy_points--;
}
void ScavTrap::guardGate(void)
{
	std::cout << YELLOW << getName() << " ScavTrap is now in GateKeeper mode." << WHITE << std::endl;
}

