/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:42:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/04 10:25:41 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"
#include "FragTrap.hpp"


void test01(void)
{
	ClapTrap T("Tom");
	FragTrap Y("Yoan");
	FragTrap K("Karim");


	T.attack(Y.getName());
	K.attack(T.getName());
	Y.attack(K.getName());

	std::cout << GREEN;
	T.takeDamage(8);
	T.takeDamage(8);
	Y.takeDamage(40);
	K.takeDamage(30);

	std::cout << WHITE;
	Y.beRepaired(10);
	K.beRepaired(15);
	
	Y.highFivesGuys();
	K.highFivesGuys();
}
int main()
{
	test01();	
	return(0);
}