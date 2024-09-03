/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:11:37 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/03 11:02:14 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon():type("unknown"){}
Weapon::Weapon(const std::string name):type(name){}

Weapon::~Weapon(){}

void Weapon::setType(const std::string arm)
{
	type = arm;
}

const std::string& Weapon::getType(void)
{
	return(type);
}