/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:02:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/19 13:46:33 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main()
{
	ClapTrap T("Tom");
	ClapTrap J("Jerry");
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