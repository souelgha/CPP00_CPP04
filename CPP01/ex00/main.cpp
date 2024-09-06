/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:03:59 by sonia             #+#    #+#             */
/*   Updated: 2024/09/06 11:34:43 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
	std::cout << "========== heap zombie ==========" << std::endl;
	Zombie *Deathh = new Zombie("boooo");
	Zombie *Dth = new Zombie("hello");
	Deathh->announce();
	Dth->announce();
	delete Deathh;
	delete Dth;
	
	std::cout <<"\n" << "========== stack zombie ==========" << std::endl;
	randomChump("wolllff");
	randomChump("Hola");


	return(0);
	

}