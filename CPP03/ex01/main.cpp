/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:42:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/19 16:51:03 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

int main()
{
	ClapTrap T("Tom");
	ScavTrap J("Jerry");
	ClapTrap P("Paul");

	std::cout << GREEN ;	
	T.attack(J.getName());
	J.takeDamage(5);
	J.beRepaired(1);
	std::cout << YELLOW ;	
	J.attack(T.getName());
	T.attack(P.getName());
	P.takeDamage(5);
	std::cout << GREEN ;	
	P.attack(T.getName());
	T.takeDamage(4);
	std::cout << CYAN ;
	T.attack(J.getName());
	J.takeDamage(6);
	J.beRepaired(4);
	J.takeDamage(5);
	std::cout << WHITE;
	
	
	return(0);
}