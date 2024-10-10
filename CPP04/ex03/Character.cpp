/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:37:58 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/09 12:05:34 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character():_name("unknown")
{
	for (int i = 0; i < 4 ; ++i)
		inventory[i]=NULL;
	// std::cout << MAGENTA << "[Character] default constructor called" << WHITE << std::endl;
}
Character::Character(std::string name ):_name(name)
{
	for (int i = 0; i < 4 ; ++i)
		inventory[i]=NULL;
	// std::cout << MAGENTA << "[Character] para constructor called" << WHITE  << std::endl;
}
Character::~Character()
{
	for (int i = 0; i < 4 ; ++i)
		delete inventory[i];
	// std::cout << MAGENTA << "[Character] destructor called" << WHITE << std::endl;
}
Character::Character(const Character& copy)
{
	// std::cout << MAGENTA << "[Character] copy constructor called" << WHITE  << std::endl;
	this->_name = copy._name;
	for (int i = 0; i < 4 ; ++i)
	{
		if(inventory[i] != NULL)
			this->inventory[i]= copy.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	
}
Character& Character::operator=(const Character &copy)
{
	// std::cout << MAGENTA << "[Character] assign constructor called" << WHITE << std::endl;
	if(this != &copy)
	{	
		this->_name = copy._name;
		for(int i = 0; i <  4; ++i)
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
		for (int i = 0; i < 4 ; ++i)
		{
			if(this->inventory[i] != NULL)
				this->inventory[i]= copy.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	
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
			// std::cout << MAGENTA << "Materia added to index " << i << " for " << this->_name<< WHITE<< std::endl;
			return;
		}
	}
	std::cout << MAGENTA << "Character " << this->_name << " has no slot available.\n" << WHITE << std::endl;
	delete m;
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
AMateria* Character::getUnequipMat(int idx) const
{
	if(idx >=0 && idx < 4 && inventory[idx] != NULL)
		return(inventory[idx]);
	std::cout <<" No Materia found at this index : " << idx << std::endl;
	return(NULL);
	}