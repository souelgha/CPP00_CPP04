/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:02:52 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/30 18:55:23 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main()
{
	ClapTrap T("Tom");
	ClapTrap J("Jerry");
	ClapTrap P("Paul");

	J.attack(T.getName());
	T.attack(P.getName());
	T.attack(J.getName());
	P.attack(T.getName());
	
	J.takeDamage(5);
	J.takeDamage(2);
	P.takeDamage(5);	
	T.takeDamage(4);

	J.takeDamage(6);
	P.beRepaired(4);
	T.beRepaired(1);

	return(0);
}