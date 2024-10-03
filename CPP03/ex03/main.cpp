/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:42:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/03 15:08:51 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"


void test01(void)
{
	std::cout << "\n********** test 01 **********" << std::endl;
	ClapTrap T("Tom");
	ScavTrap J("Jerry");
	FragTrap Y("Yoan");
	DiamondTrap B("Barbie");
	DiamondTrap C;

	std::cout << MAGENTA ;

	Y.attack("Barbie");
	B.attack("Jerry");
	B.attack("Tom");
	T.attack("Jerry");
	J.attack("Tom");
	T.attack("enemy");

	B.takeDamage(30);
	J.takeDamage(20);
	B.takeDamage(20);
	T.takeDamage(10);
	C.takeDamage(5);

	B.beRepaired(10);
	T.beRepaired(15);

	B.whoAmI();
	B.highFivesGuys();
	B.guardGate();
	J.guardGate();
	Y.highFivesGuys();

}
int main()
{
	test01();
	return(0);
}