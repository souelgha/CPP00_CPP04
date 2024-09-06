/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:53:06 by sonia             #+#    #+#             */
/*   Updated: 2024/09/06 11:33:07 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string nom)
{
	this->_name = nom;
}
Zombie::Zombie(void)
{
	this->_name = "Foo";
}
Zombie::~Zombie()
{
	std::cout << "destruction du Zombie nomme: " << this->_name << std::endl;
}
void Zombie::announce(void)
{
	std::cout << YELLOW << this->_name << ": BraiiiiiiinnnzzzZ..." << DEFAULT << std::endl;
}