/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:30:38 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/24 12:15:36 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << MAGENTA << "[DiamondTrap] constructeur par defaut" << WHITE <<std::endl;
}

DiamondTrap::DiamondTrap(std::string nom ):ClapTrap(nom+"_clap_name"), ScavTrap(nom), FragTrap(nom), name(nom)
{
	this->Hit_points = FragTrap::Hit_points;
	this->Energy_points= 50;
	this->Attack_damage = FragTrap::Attack_damage;
	std::cout << MAGENTA << "[DiamondTrap] constructeur avec parametres" << WHITE <<std::endl;
	std::cout << MAGENTA <<  this->name <<  " HP= " << this->Hit_points << " EP= " ;
	std::cout << this->Energy_points <<" AD= "<< this->Attack_damage << WHITE <<std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << MAGENTA << "[DiamondTrap] destructeur par defaut" << WHITE <<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other)
{	
	std::cout << MAGENTA <<"[DiamondTrap] constructeur de copie" << std::endl;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if(this == &other)
		return(*this);
	this->Name = other.Name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	std::cout << MAGENTA <<"[DiamondTrap] constructeur d assignation de copie" << WHITE << std::endl;
	return(*this);
}
void DiamondTrap::whoAmI(void)
{
	std::cout << MAGENTA << "my Diamond name is : " << this->name ;
	std::cout << " .My Claptrap name is :" << ClapTrap::Name << WHITE <<std::endl;
}
void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}