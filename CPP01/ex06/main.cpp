/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 09:58:54 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/06 11:09:10 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cerr << "\n" << RED << " nbre d arguments invalide" << DEFAULT << std::endl;
		return(1);
	}
	Harl urgence;
	std::cout << "\n";
	urgence.complain(argv[1]);
	return (0);
}