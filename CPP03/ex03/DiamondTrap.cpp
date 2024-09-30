/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:30:38 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/30 17:47:25 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << MAGENTA << "[DiamondTrap] constructeur par defaut" << WHITE <<std::endl;
}

DiamondTrap::DiamondTrap(std::string Name ):ClapTrap(Name+"_clap_name"), ScavTrap(Name), FragTrap(Name), _Name(Name)
{
	this->_Name = Name;
	this->Hit_points = 100;
	this->Energy_points= 50;
	this->Attack_damage = 30;
	std::cout << MAGENTA << "[DiamondTrap] constructeur avec parametres pour " << this->_Name << " appele" << WHITE <<std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << MAGENTA << "[DiamondTrap] destructeur par defaut pour " << this->_Name << " appele" << WHITE <<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other), ScavTrap(other), FragTrap(other)
{	
	std::cout << MAGENTA <<"[DiamondTrap] constructeur de copie" << std::endl;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if(this == &other)
		return(*this);
	this->_Name = other._Name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	std::cout << MAGENTA <<"[DiamondTrap] constructeur d assignation de copie" << WHITE << std::endl;
	return(*this);
}
void DiamondTrap::whoAmI(void)
{
	std::cout << MAGENTA << "my Diamond name is : " << this->_Name ;
	std::cout << ". My Claptrap name is :" << ClapTrap::_Name << "." << WHITE <<std::endl;
}
void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}