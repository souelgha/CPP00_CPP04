/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:03:59 by sonia             #+#    #+#             */
/*   Updated: 2024/08/25 14:00:58 by sonia            ###   ########.fr       */
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