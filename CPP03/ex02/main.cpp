/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:42:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/03 14:19:08 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"
#include "FragTrap.hpp"


void test01(void)
{
	std::cout << "\n********** test 01 **********" << std::endl;
	ClapTrap T("Tom");
	ScavTrap J("Jerry");
	FragTrap Y("Yoan");
	FragTrap K("Karim");


	T.attack(J.getName());
	J.attack(K.getName());
	T.attack(Y.getName());
	J.attack(T.getName());
	Y.attack(J.getName());
	J.attack(Y.getName());
	K.attack(Y.getName());

	std::cout << GREEN;
	J.takeDamage(40);
	T.takeDamage(8);
	J.takeDamage(20);
	T.takeDamage(8);
	Y.takeDamage(40);
	K.takeDamage(30);

	std::cout << WHITE;
	J.beRepaired(10);
	Y.beRepaired(10);
	J.beRepaired(4);
	K.beRepaired(15);

	J.guardGate();
	Y.highFivesGuys();
	K.highFivesGuys();
}
int main()
{
	test01();	
	return(0);
}