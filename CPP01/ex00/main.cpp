/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:03:59 by sonia             #+#    #+#             */
/*   Updated: 2024/09/11 11:25:05 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
	std::cout << "========== heap Zombies ==========" << std::endl;
	Zombie *Deathh = newZombie("boooo");
	Zombie *Dth = newZombie("hello");
	Zombie *noname = newZombie("");
	Deathh->announce();
	Dth->announce();
	noname->announce();
	delete Deathh;
	delete Dth;
	delete noname;
	
	std::cout <<"\n" << "========== stack Zombies ==========" << std::endl;
	randomChump("wolllff");
	randomChump("Hola");
	randomChump("");


	return(0);
	

}