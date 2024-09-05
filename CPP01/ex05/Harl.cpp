/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:12:30 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/05 15:21:15 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}
Harl::~Harl(void){}

void Harl::debug(void)
{
	std::cout << MAGENTA << "[DEBUG]   " << DEFAULT;
	std::cout << " level 1 : mode debug active!!" << std::endl;
}
void Harl::info(void)
{
	std::cout << GRAY << "[INFO]   " << DEFAULT;
	std::cout << " level 2 : mode info active!!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << YELLOW << "[WARNING]   " << DEFAULT;
	std::cout << " level 3 : mode warning active!!" << std::endl;
}
void Harl::error(void)
{
	std::cout << RED << "[ERROR]   " << DEFAULT;
	std::cout << " level 4 : mode error active!!" << std::endl;
}
void Harl::complain(std::string level)
{
	void (Harl::*ptfctns[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string niveau[4] ={"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i=0; i < 4; ++i)
	{
		if(level == niveau[i])
		{
			(this->*ptfctns[i])();
			break;
		}

	}	
}

