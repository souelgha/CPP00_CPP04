/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:20:39 by sonia             #+#    #+#             */
/*   Updated: 2024/09/11 11:57:04 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* ZombieHorde(int N, std::string name)
{
	Zombie* horde  = new Zombie[N];
	if(!horde)
		return(NULL);	
	for(int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}	
	return(horde);
}
