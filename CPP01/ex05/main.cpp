/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:11:06 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/05 15:35:55 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(void)
{
	Harl alarm;
	std::string level;
	std::cout << MAGENTA << " quel est le level de Harl ? \n" ;
	std::cout << "DEBUG ? INFO ? WARNING ? ou ERROR ? " << DEFAULT << std::endl;
	std::cin >> level;
	if (level != "DEBUG" && level != "WARNING" && level != "INFO" && level != "ERROR")
	{
		std::cerr << RED << "aucun niveau ne correspond a votre entree" << DEFAULT << std::endl;
		return(1);
	}
	alarm.complain(level);
	return(0);
}
