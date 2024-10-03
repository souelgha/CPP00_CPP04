/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:30:38 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/03 15:04:55 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(), ScavTrap(), FragTrap()
{
	this->_Name = "unknown";
	this->Hit_points = FragTrap::Hit_points;
	this->Energy_points= ScavTrap::Energy_points;
	this->Attack_damage = FragTrap::Attack_damage;
	std::cout << MAGENTA << "[DiamondTrap] constructeur par defaut de "<< this->_Name << WHITE <<std::endl;
}
DiamondTrap::DiamondTrap(std::string Name ):ClapTrap(Name+"_clap_name"), ScavTrap(Name +"_clap_name"), FragTrap(Name +"_clap_name")
{
	this->_Name = Name;
	this->Hit_points = FragTrap::Hit_points;
	this->Energy_points= ScavTrap::Energy_points;
	this->Attack_damage = FragTrap::Attack_damage;
	std::cout << MAGENTA << "[DiamondTrap] constructeur avec parametres de " << this->_Name << WHITE <<std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << MAGENTA << "[DiamondTrap] destructeur par defaut de " << this->_Name << WHITE <<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other._Name +"_clap_name"), ScavTrap(other._Name +"_clap_name"), FragTrap(other._Name +"_clap_name")
{	
	this->_Name = other._Name;
	std::cout << MAGENTA <<"[DiamondTrap] constructeur de copie de " << this->_Name << std::endl;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if(this == &other)
		return(*this);
	this->_Name = other.getName();
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
