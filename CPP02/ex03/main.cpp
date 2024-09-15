/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:54:50 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/15 16:19:07 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
bool bsp(Point const a, Point const b, Point const c, Point const point);


int main(void)
{
	{	
		/******* test 1  ********/
		Point const a(3.0f,1.0f);
		Point const b(10.0f,1.0f);
		Point const c(6.0f,6.0f);
		Point const p (6.0f, 3.0f);

		bool r= bsp(a, b,  c, p);
		std::cout << CYAN << " resultat: " << r << std::endl;
		if (r == 1)
			std::cout << GREEN << "Le point p appartient au triangle abc! " << WHITE << std::endl;
		else
			std::cout << RED << "Le point p appartient au triangle abc! " << WHITE << std::endl;
	}
	{
		/******* test 2  ********/
		Point const a(0.0f,0.0f);
		Point const b(1.0f,0.0f);
		Point const c(0.5f,1.0f);
		Point const p (0.5f, 1.0f);

		bool r= bsp(a, b, c, p);
		std::cout << CYAN << " resultat: " << r << std::endl;
		if (r == 1)
			std::cout << GREEN << "Le point p appartient au triangle abc! " << WHITE << std::endl;
		else
			std::cout << RED << "Le point p appartient au triangle abc! " << WHITE << std::endl;
	}

	{
		/******* test 3  ********/
		Point const a(2.0f,3.0f);
		Point const b(6.0f,1.0f);
		Point const c(4.0f,5.0f);
		Point const p (5.0f, 4.0f);

		bool r= bsp(a, b, c, p);
		std::cout << CYAN << " resultat: " << r << std::endl;
		if (r == 1)
			std::cout << GREEN << "Le point p appartient au triangle abc! " << WHITE << std::endl;
		else
			std::cout << RED << "Le point p appartient au triangle abc! " << WHITE << std::endl;
	}
	
	return (0);
}