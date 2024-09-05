/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:08:12 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/05 15:33:08 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

HumanA::HumanA(std::string nom, Weapon& arm):type(arm), name(nom){}

HumanA::~HumanA(){}


void HumanA::attack() const
{
	std::cout << YELLOW << name << " attacks with their "<< type.getType() << DEFAULT << std::endl;
}
