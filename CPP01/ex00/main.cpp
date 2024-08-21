/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:03:59 by sonia             #+#    #+#             */
/*   Updated: 2024/08/21 19:26:49 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
	std::cout << "========== heap zombie ==========" << std::endl;
	Zombie *Deathh = new Zombie("boooo");
	Zombie *Dth = new Zombie("");
	Deathh->announce();
	Dth->announce();
	delete Deathh;
	delete Dth;
	
	std::cout <<"\n" << "========== stack zombie ==========" << std::endl;
	randomChump("wolllff");
	randomChump("");


	return(0);
	

}