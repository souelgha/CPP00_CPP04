/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:42:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/04 10:27:39 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

void test01(void)
{
	ClapTrap T("Tom");
	ScavTrap J("Jerry");
	ScavTrap D;


	J.attack(T.getName());
	T.attack(J.getName());
	T.attack(D.getName());

	std::cout << CYAN;
	J.takeDamage(40);
	J.takeDamage(6);
	T.takeDamage(8);
	D.takeDamage(80);
	
	std::cout << GREEN;
	J.beRepaired(4);
	J.beRepaired(10);
	D.beRepaired(10);

	J.guardGate();
	D.guardGate();

}
int main()
{
	test01();
	return(0);
}