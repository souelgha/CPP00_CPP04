/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:42:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/04 10:34:11 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"


void test01(void)
{
	DiamondTrap B("Barbie");
	DiamondTrap C;

	std::cout << MAGENTA ;

	B.attack("enemy");
	C.attack("Barbie");

	B.takeDamage(40);
	B.takeDamage(20);
	C.takeDamage(20);

	B.beRepaired(10);
	C.beRepaired(5);

	B.whoAmI();
	C.whoAmI();
	B.highFivesGuys();
	B.guardGate();

}
int main()
{
	test01();
	return(0);
}