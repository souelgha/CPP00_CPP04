/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:42:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/23 13:19:57 by sonouelg         ###   ########.fr       */
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

	std::cout << GREEN ;	
	T.attack(J.getName());
	J.takeDamage(40);
	J.beRepaired(10);
	std::cout << YELLOW ;	
	J.attack(T.getName());
	T.takeDamage(8);
	std::cout << CYAN ;
	T.attack(J.getName());
	J.takeDamage(6);
	J.beRepaired(4);
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
	test01();
	test02();
	test03();
	
	return(0);
}