/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:03:59 by sonia             #+#    #+#             */
/*   Updated: 2024/09/06 11:26:46 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
	int N = 10;
	Zombie *Horde = ZombieHorde(N, "Zommmmbiiiee");

	for(int i = 0; i < N; i++)
		Horde[i].announce();	
	delete[] Horde;
	return(0);
	

}