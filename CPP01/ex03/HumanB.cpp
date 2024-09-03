/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:28:31 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/03 14:17:00 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string nom):type(NULL), name(nom){}
HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon& arm)
{
	type = &arm;
}
void HumanB::attack() const
{
		if(type)
			std::cout << name << " attacks with their " << type->getType() << std::endl;
		else
			std::cout << name << " doesn 't  have weapon" << std::endl;
}
