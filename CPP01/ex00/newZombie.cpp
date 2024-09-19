/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:20:39 by sonia             #+#    #+#             */
/*   Updated: 2024/09/11 12:07:18 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* newZombie(std::string name)
{
	Zombie* zomb1= new Zombie(name);
	if(!zomb1)
		return(NULL);
	return(zomb1);
}


