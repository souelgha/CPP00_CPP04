/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:37:58 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/02 17:47:57 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character():_name("")
{
	for (int i = 0; i < 4 ; ++i)
		inventory[i]=NULL;
	std::cout << "[Character] default constructor called" << std::endl;
}
Character::Character(std::string name ):_name(name)
{
	for (int i = 0; i < 4 ; ++i)
		inventory[i]=NULL;
	std::cout << "[Character] para constructor called" << std::endl;
}
Character::~Character()
{
	for (int i = 0; i < 4 ; ++i)
		delete inventory[i];
	std::cout << "[Character] destructor called" << std::endl;
}
Character::Character(const Character& copy)
{
	for (int i = 0; i < 4 ; ++i)
	{
		if(inventory[i] != NULL)
			this->inventory[i]= copy.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	std::cout << "[Character] copy constructor called" << std::endl;
}
Character& Character::operator=(const Character &copy)
{
	if(this != &copy)
	{	
		for(int i = 0; i <  4; ++i)
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
		for (int i = 0; i < 4 ; ++i)
		{
			if(inventory[i] != NULL)
				this->inventory[i]= copy.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	std::cout << "[Character] assign constructor called" << std::endl;
	return(*this);	
}
std::string const& Character::getName()const
{
	return(_name);
}
void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; ++i)
	{
		if(inventory[i] == NULL)
		{
			inventory[i] = m;
			std::cout << GREEN << "Materia added to index " << i << " for " << this->_name<< WHITE<< std::endl;
			return;
		}
	}
	std::cout << GREEN << "Character " << this->_name << " has no slot available." << WHITE << std::endl;
}
void Character::unequip(int idx)
{
	if(idx >= 0 && idx < 4)
		inventory[idx] = NULL;			
	else
		std::cerr <<RED << "Invalid index. " << WHITE << std::endl;
}
void Character::use(int idx, ICharacter& target)
{
	if(idx >= 0 && idx < 4 && inventory[idx] != NULL)
		inventory[idx]->use(target);
	else
		std::cerr << RED << "Invalid index or nothing inside. "<< WHITE << std::endl;
}