/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:28:31 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/06 12:13:05 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string nom):type(NULL), name(nom)
{
	std::cout << "HumanB " << name << " created with no weapon" << std::endl;
}
HumanB::~HumanB()
{
	std::cout << "destruction de HumanB " << std::endl;
}

void HumanB::setWeapon(Weapon& arm)
{
	type = &arm;
}
void HumanB::attack() const
{
		if(type)
			std::cout << MAGENTA << "HumanB " << name << " attacks with their " << type->getType() << DEFAULT << std::endl;
		else
			std::cout << CYAN << name << " doesn 't  have weapon"  << DEFAULT << std::endl;
}
