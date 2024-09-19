/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 09:58:54 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/11 15:45:05 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cerr << MAGENTA << " nbre d arguments invalide"  << std::endl;
		std::cout << "entrer le niveau de gravite : DEBUG / INFO / WARNING / ERROR";
		std::cout << DEFAULT<< std::endl;
		return(1);
	}
	
	Harl urgence;
	std::cout << "\n";
	urgence.complain(argv[1]);
	return (0);
}