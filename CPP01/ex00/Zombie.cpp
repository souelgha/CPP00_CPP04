/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:53:06 by sonia             #+#    #+#             */
/*   Updated: 2024/09/11 12:09:00 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string nom)
{
	std::cout << "constructeur appele" << std::endl;	
	this->_name = nom;
}
Zombie::Zombie()
{
	std::cout << "constructeur par default "<< std::endl;
}
Zombie::~Zombie()
{
	std::cout << "destruction du Zombie nomme: " << this->_name << std::endl;
}
void Zombie::announce(void)
{
	std::cout << YELLOW << this->_name << ": BraiiiiiiinnnzzzZ..." << DEFAULT << std::endl;
}
