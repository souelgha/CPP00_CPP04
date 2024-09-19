/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:03:59 by sonia             #+#    #+#             */
/*   Updated: 2024/09/11 12:10:39 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
	int N = 2;
	if (N <= 0)
		return(1);
	Zombie *Horde = ZombieHorde(N, "Zommmmbiiiee");
	for(int i = 0; i < N; i++)
		Horde[i].announce();	
	delete[] Horde;
	return(0);
	

}