/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:08:12 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/02 16:37:14 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

HumanA::HumanA(std::string nom, Weapon& arm):type(arm), name(nom){}

HumanA::~HumanA(){}


void HumanA::attack() const
{
	std::cout << name << " attacks with their "<< type.getType() << std::endl;
}
