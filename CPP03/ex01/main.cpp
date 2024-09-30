/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:42:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/30 18:47:52 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

void test01(void)
{
	std::cout << "********** test 01 **********" << std::endl;
	ScavTrap V;
	ScavTrap J("Jerry");
}

void test02(void)
{
	std::cout << "\n********** test 02 **********" << std::endl;
	ClapTrap T("Tom");
	ScavTrap J("Jerry");

	J.attack(T.getName());
	T.attack(J.getName());
	T.attack(J.getName());

	J.takeDamage(40);
	J.takeDamage(6);
	T.takeDamage(8);
	J.beRepaired(4);
	J.beRepaired(10);

	J.guardGate();

}
int main()
{
	test01();
	test02();
	
	return(0);
}