/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:12:30 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/06 13:54:12 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}
Harl::~Harl(void){}

void Harl::debug(void)
{
	std::cout << MAGENTA << "[DEBUG]\n" ;
	std::cout << "A tous, il se passe quelque chose en salle..." << DEFAULT << std::endl;
}
void Harl::info(void)
{
	std::cout << GRAY << "[INFO]\n" ;
	std::cout << "Vite, Allez voir ce qui se passe!" << DEFAULT << std::endl;
}
void Harl::warning(void)
{
	std::cout << YELLOW << "[WARNING]\n" ;
	std::cout << "Attention on a GROS probleme: le plat est trop epice. Ca pique!!" << DEFAULT << std::endl;
}
void Harl::error(void)
{
	std::cout << RED << "[ERROR]\n";
	std::cout << "Oulalalalala le client est tressss tres fache!" << DEFAULT << std::endl;
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

