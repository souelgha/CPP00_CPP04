/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 09:58:50 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/06 11:01:28 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}
Harl::~Harl(void){}

void Harl::debug(void)
{
	std::cout << MAGENTA << "[DEBUG]\n" << DEFAULT;
	std::cout << " level 1 : mode DEBUG active!!" << std::endl;
}
void Harl::info(void)
{
	std::cout << GRAY << "[INFO]\n" << DEFAULT;
	std::cout << " level 2 : mode INFO active!!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << YELLOW << "[WARNING]\n" << DEFAULT;
	std::cout << " level 3 : mode WARNING active!!" << std::endl;
}
void Harl::error(void)
{
	std::cout << RED << "[ERROR]\n" << DEFAULT;
	std::cout << " level 4 : mode ERROR active!!" << std::endl;
}
void Harl::complain(std::string level)
{
	void (Harl::*ptfctns[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string niveau[4] ={"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	for(i=0; i < 4; ++i)
	{
		if(level == niveau[i])
			break;
	}
	switch (i)
	{
		case 0:
			(this->*ptfctns[0])();
			std::cout << "\n";
		case 1:
			(this->*ptfctns[1])();
			std::cout << "\n";
		case 2:
			(this->*ptfctns[2])();
			std::cout << "\n";
		case 3:
			(this->*ptfctns[3])();
			std::cout << "\n";
			break;
		default:
			std::cout << CYAN << " [Probably complaining about insignificant problems] " << DEFAULT << std::endl;
			std::cout << "\n";
			break;
	}
}
