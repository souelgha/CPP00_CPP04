/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:38:13 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/03 14:24:52 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include"HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("BOB", club);
		bob.attack();
		club.setType("some other type club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type club");
		jim.attack();
	 }
	{
		
		HumanB jim("Jim");
		jim.attack();
		Weapon club = Weapon("crude spiked club");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type club");
		jim.attack();
	 }
	
	return(0);
}