/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:37:21 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/17 16:44:43 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap():Name("unknown"),Hit(10), Energy(10), Attack(0)
{
	std::cout <<"constructeur par default" << std::endl;
}
ClapTrap::ClapTrap(std::string nom):Name(nom),Hit(10), Energy(10), Attack(0)
{
	std::cout <<"constructeur avec parametres" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->Name = other.Name;
	this->Hit = other.Hit;
	this->Energy = other.Energy;
	this->Attack = other.Attack;
	std::cout <<"constructeur de copie" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if(this != &other)
	{
		this->Name = other.Name;
		this->Hit = other.Hit;
		this->Energy = other.Energy;
		this->Attack = other.Attack;
	}
	std::cout <<"constructeur d assignation de copie" << std::endl;
	return(*this);

}

ClapTrap::~ClapTrap()
{
	std::cout <<"destructeur par default" << std::endl;
}
void ClapTrap::setName(std::string nom)
{
	this->Name = nom;
}
std::string ClapTrap::getName()
{
	return(this->Name);
}
unsigned int ClapTrap::getHit(void)
{
	return(this->Hit);
}
unsigned int ClapTrap::getEnergy(void)
{
	return(this->Energy);
}
unsigned int ClapTrap::getAttack(void)
{
	return(this->Attack);
}
void ClapTrap::attack(const std::string& target)
{
	if(this->Hit == 0)
		std::cout << "Claptrap " << Name << " is already dead. No attack possible" << std::endl;
	std::cout << "ClapTrap " << Name << " attacks Claptrap" << target;
	std::cout << " causing " << this->Attack << " points of damage !"<< std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->Hit == 0)
	{
		std::cout << Name << " is already dead. Stop here" << std::endl;
		return;
	}
	if(this->Hit < amount)
	{
		Hit = 0;
		Energy -= 1;
		std::cout << Name << "is damaged and dead. No more Hit point" << std::endl;
		return;
	}	
	
	Hit -= amount;
	Energy -= 1;
	Attack += amount;
	std::cout << this->Name << " take damage of [" << amount << "] points." ;
	std::cout << " Hit [" << this->Hit << "]" ;
	std::cout << " Energy [" << this->Energy << "]";
	std::cout << " Attack [" << this->Attack << "]" << std::endl;

}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->Hit == 0)
	{
		std::cout << "Claptrap " << Name << " is already dead. Stop here" << std::endl;
		return;
	}
	if(this->Energy > 0)
	{
		Hit += amount;
		Energy -= 1;
		std::cout << this->Name << " repaired itself using [" << amount << "] points.";
		std::cout << " Hit [" << this->Hit << "]" ;
		std::cout << " Energy [" << this->Energy << "]";
		std::cout << " Attack [" << this->Attack << "]" << std::endl;
		return;
	}
	else
		std::cout << this->Name << " have no enough points to repair! " << std::endl;
	;

}