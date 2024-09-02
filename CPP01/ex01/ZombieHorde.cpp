/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:20:39 by sonia             #+#    #+#             */
/*   Updated: 2024/08/28 17:22:22 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* ZombieHorde(int N, std::string name)
{
	Zombie* horde  = new Zombie[N];

	for(int i = 0; i < N; i++)
	{
		std::string zombiname = name;
		horde[i]=Zombie(zombiname);
	}	
	return(horde);
}
