/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:42:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/30 18:39:10 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"
#include "FragTrap.hpp"

void test01(void)
{
	std::cout << "********** test 01 **********" << std::endl;
	ScavTrap V;
	ScavTrap J("Jerry");
}
void test02(void)
{
	std::cout << "********** test 02 **********" << std::endl;
	FragTrap X;
	FragTrap Y("Yoan");
}
void test03(void)
{
	std::cout << "\n********** test 03 **********" << std::endl;
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

	J.takeDamage(40);
	T.takeDamage(8);
	J.takeDamage(20);
	T.takeDamage(8);
	Y.takeDamage(40);
	K.takeDamage(30);


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
	// test01();
	// test02();
	test03();	
	return(0);
}