/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:08:12 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/06 12:59:19 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

HumanA::HumanA(std::string nom, Weapon& arm):type(arm), name(nom)
{
	std::cout << "HumanA " << name << " created" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "destruction de HumanA " << std::endl;
}

void HumanA::attack() const
{
	std::cout << YELLOW << "HumanA " << name << " attacks with their "<< type.getType() << DEFAULT << std::endl;
}
