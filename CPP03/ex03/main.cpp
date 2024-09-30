/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:42:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/30 18:15:37 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"


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
	std::cout << "********** test 03 **********" << std::endl;
	DiamondTrap A;
	DiamondTrap B("Barbie");
}
void test05(void)
{
	std::cout << "\n********** test 05 **********" << std::endl;
	ClapTrap T("Tom");
	ScavTrap J("Jerry");
	FragTrap Y("Yoan");
	DiamondTrap B("Barbie");
	DiamondTrap *Z= new DiamondTrap("Zoro");

	std::cout << MAGENTA ;
	B.whoAmI();
	Z->whoAmI();

	Y.attack("Barbie");
	Z->attack("Barbie");
	T.attack(B.getName());
	B.attack("Zoro");
	B.attack("Zoro");
	T.attack("Jerry");
	J.attack("Tom");

	B.takeDamage(20);
	J.takeDamage(20);
	B.takeDamage(20);
	Z->takeDamage(20);	
	T.takeDamage(40);

	B.beRepaired(10);
	T.beRepaired(15);

	J.guardGate();
	Y.highFivesGuys();

	delete Z;
}
int main()
{
	// test01();
	// test02();
	// test03();
	test05();
	return(0);
}