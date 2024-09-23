/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:30:38 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/23 17:13:23 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << MAGENTA << "[DiamondTrap] constructeur par defaut" << WHITE <<std::endl;
}

DiamondTrap::DiamondTrap(std::string nom ):ClapTrap(nom+"_clap_name"), name(nom)
{
	this->Hit_points = 100;
	this->Energy_points= 50;
	this->Attack_damage = 30;
	std::cout << MAGENTA << "[DiamondTrap] constructeur avec parametres" << WHITE <<std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << MAGENTA << "[DiamondTrap] destructeur par defaut" << WHITE <<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other)
{
	this->Name = other.Name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	std::cout << MAGENTA <<"[DiamondTrap] constructeur de copie" << std::endl;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	(void) other;
	std::cout << MAGENTA <<"[DiamondTrap] constructeur d assignation de copie" << WHITE << std::endl;
	return(*this);
}
void DiamondTrap::whoAmI(void)
{
	std::cout << MAGENTA << "my name is : " << this->name ;
	std::cout << " . My Claptrap name is :" << ClapTrap::Name << WHITE <<std::endl;
}
void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}