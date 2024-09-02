/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:28:31 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/02 16:47:13 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string nom):name(nom){}
HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon& arm)
{
	type = &arm;
}
void HumanB::attack() const
{
		std::cout << name << " attacks with their " << type->getType() << std::endl;
}
