/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:53:06 by sonia             #+#    #+#             */
/*   Updated: 2024/08/25 14:00:44 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "constructeur par defaut" << std::endl;
}
Zombie::Zombie(std::string zombiename) : _name(zombiename)
{
	
}
Zombie::~Zombie()
{
	std::cout << "destruction du Zombie nomme: " << this->_name << std::endl;
}
void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
