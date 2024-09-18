/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:02:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/18 16:53:02 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main()
{
	ClapTrap T("Tom");
	ClapTrap J("Jerry");
	ClapTrap P("Paul");

	std::cout << GREEN ;
	J.takeDamage(5);
	T.attack(J.getName());	
	J.beRepaired(1);
	T.takeDamage(2);
	J.attack(T.getName());	
	P.takeDamage(5);
	T.attack(P.getName());	
	P.attack(T.getName());
	T.takeDamage(4);
	J.beRepaired(1);
	T.attack(J.getName());
	J.takeDamage(5);
	std::cout << WHITE;
	
	
	return(0);
}