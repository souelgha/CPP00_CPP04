/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:53:06 by sonia             #+#    #+#             */
/*   Updated: 2024/09/11 11:58:26 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "constructeur par defaut" << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "destruction du zombie :\t" << this->_name << std::endl;
}
void Zombie::setName(std::string zombiename)
{
	this->_name = zombiename;
}
void Zombie::announce(void)
{
	std::cout << MAGENTA << this->_name << ": BraiiiiiiinnnzzzZ..." << DEFAULT << std::endl;
}
