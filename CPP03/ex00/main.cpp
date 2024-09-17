/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:02:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/17 16:45:30 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main()
{
	ClapTrap T("Tom");
	ClapTrap J("Jerry");

	std::cout << GREEN ;
	T.attack(J.getName());
	J.takeDamage(5);
	J.beRepaired(1);
	J.attack(T.getName());
	T.takeDamage(2);
	T.beRepaired(1);	
	T.attack(J.getName());
	J.takeDamage(3);
	J.attack(T.getName());
	T.takeDamage(4);
	J.beRepaired(1);
	T.attack(J.getName());
	J.takeDamage(5);
	std::cout << WHITE;
	
	
	return(0);
}