/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:20:39 by sonia             #+#    #+#             */
/*   Updated: 2024/08/24 14:01:42 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* ZombieHorde(int N, std::string name)
{
	Zombie* horde  = new Zombie[N];

	for(int i = 0; i < N; i++)
	{
		std::string zombiname = name + "_" +std::to_string(i);
		horde[i]=Zombie(zombiname);
	}	
	return(horde);
}
