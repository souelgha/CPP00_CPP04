/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:42:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/24 12:16:35 by sonouelg         ###   ########.fr       */
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

	std::cout << MAGENTA ;
	B.whoAmI();
	T.attack(B.getName());
	B.takeDamage(20);
	T.attack(B.getName());
	B.takeDamage(20);
	T.attack(B.getName());
	B.takeDamage(40);
	B.beRepaired(10);
	std::cout << YELLOW ;	
	J.attack(T.getName());
	T.takeDamage(8);
	std::cout << CYAN ;
	B.attack(J.getName());
	J.takeDamage(6);
	J.takeDamage(5);
	std::cout << GREEN ;
	J.attack(T.getName());
	T.takeDamage(8);
	J.guardGate();
	std::cout << RED ;
	Y.attack(J.getName());
	J.attack(Y.getName());
	Y.takeDamage(40);
	Y.beRepaired(15);
	Y.highFivesGuys();
	J.guardGate();
	std::cout << WHITE;
}
int main()
{
	// test01();
	// test02();
	// test03();
	test05();
	return(0);
}