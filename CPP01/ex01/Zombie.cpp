/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:53:06 by sonia             #+#    #+#             */
/*   Updated: 2024/09/06 11:37:03 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	
}
Zombie::Zombie(std::string zombiename) : _name(zombiename)
{
	
}
Zombie::~Zombie()
{
	std::cout << "destruction zombie :\t" << this->_name << std::endl;
}
void Zombie::announce(void)
{
	std::cout << MAGENTA << this->_name << ": BraiiiiiiinnnzzzZ..." << DEFAULT << std::endl;
}
