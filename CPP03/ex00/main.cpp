/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:02:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/03 14:12:52 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main()
{
	ClapTrap T("Tom");
	ClapTrap J("Jerry");
	ClapTrap P("Paul");
	ClapTrap R;


	std::cout << GREEN;
	J.attack(T.getName());
	T.attack(P.getName());
	T.attack(J.getName());
	P.attack(T.getName());
	R.attack(T.getName());
	
	std::cout << CYAN;
	J.takeDamage(5);
	J.takeDamage(2);
	P.takeDamage(5);	
	T.takeDamage(4);
	J.takeDamage(6);
	std::cout << YELLOW;
	P.beRepaired(4);
	T.beRepaired(1);
	std::cout << WHITE;
	return(0);
}