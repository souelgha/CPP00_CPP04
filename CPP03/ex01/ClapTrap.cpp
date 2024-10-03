/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:37:21 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/03 14:59:48 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap():_Name("unknown"),Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << BLUE << "[ClapTrap] constructeur par defaut de "  << this->_Name << WHITE << std::endl;
}
ClapTrap::ClapTrap(std::string nom):_Name(nom),Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << BLUE << "[ClapTrap] constructeur avec parametres de " << this->_Name << WHITE << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->_Name = other._Name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	std::cout << BLUE  << "[Claptrap] constructeur de copie de " << this->_Name <<  WHITE << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if(this == &other)
		return(*this);
	this->_Name = other._Name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	std::cout << BLUE << "constructeur d assignation de copie" << WHITE << std::endl;
	return(*this);
}
ClapTrap::~ClapTrap()
{
	std::cout << BLUE <<"[ClapTrap] destructeur par defaut de " << this->_Name << WHITE << std::endl;
}
void ClapTrap::setName(std::string nom)
{
	this->_Name = nom;
}
std::string ClapTrap::getName() const
{
	return(this->_Name);
}
void ClapTrap::attack(const std::string& target)
{
	if(this->Hit_points == 0 || this->Energy_points == 0)
	{
		std::cout << "Claptrap " << this->_Name << " is already dead. No attack possible" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_Name << " attacks " << target;
	std::cout << " causing " << this->Attack_damage << " points of damage !"<< std::endl;
	this->Energy_points--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->Hit_points == 0)
	{
		std::cout << this->_Name << " is already dead. Stop here!" << std::endl;
		return;
	}
	if(this->Hit_points < amount)
	{
		this->Hit_points = 0;
		std::cout << this->_Name << " is damaged and dead. No more Hit points." << std::endl;
		return;
	}	
	this->Hit_points -= amount;
	std::cout << this->_Name << " take damage of [" << amount << "] points." ;
	std::cout << " Hit_points [" << this->Hit_points << "]" ;
	std::cout << " Energy_points [" << this->Energy_points << "]" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->Hit_points == 0)
	{
		std::cout << "Repair no possible! " << this->_Name << " is already dead. Stop here" << std::endl;
		return;
	}
	if (this->Energy_points == 0)
		std::cout << this->_Name << " has not enough energy points to repair! " << std::endl;
	else
	{
		this->Hit_points += amount;
		this->Energy_points--;
		std::cout << this->_Name << " repaired itself using [" << amount << "] points.";
		std::cout << " Hit_points [" << this->Hit_points << "]" ;
		std::cout << " Energy_points [" << this->Energy_points << "]" << std::endl;
		return;
	}	
}