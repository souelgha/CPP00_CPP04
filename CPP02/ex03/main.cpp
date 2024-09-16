/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:54:50 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/16 16:49:00 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
bool bsp(Point const a, Point const b, Point const c, Point const point);

void printBool(bool r)
{
	std::cout << CYAN << "resultat bsp: " << r << std::endl;
	if (r == 1)
		std::cout << GREEN << "Le point p appartient au triangle abc! " << WHITE << std::endl;
	else
		std::cout << RED << "Le point p n'appartient pas au triangle abc! " << WHITE << std::endl;
}
void test1() /*** dans le triangle ***/
{	
	std::cout << "\n" << "test1: IN. a(3.0f,1.0f); b(10.0f,1.0f); c(6.0f,6.0f); p (6.0f, 3.0f)" << std::endl;
	Point const a(3.0f,1.0f);
	Point const b(10.0f,1.0f);
	Point const c(6.0f,6.0f); 
	Point const p (6.0f, 3.0f);

	bool r= bsp(a, b,  c, p);
	printBool(r);
}
void test2() /*** sur un sommet ***/
{
	std::cout << "\n" << "test2 :OUT.sur sommet. a(0.0f,0.0f); b(1.0f,0.0f); c(0.5f,1.0f);p (0.5f, 1.0f); " << std::endl;
	Point const a(0.0f,0.0f);
	Point const b(1.0f,0.0f);
	Point const c(0.5f,1.0f);
	Point const p (0.5f, 1.0f);

	bool r= bsp(a, b, c, p);
	printBool(r);
}
void test3() /*** en dehors du triangle ***/
{
	std::cout << "\n" << "test 3 : OUT. a(2.0f,3.0f); b(6.0f,1.0f); c(4.0f,5.0f); p (5.0f, 4.0f);" << std::endl;
	Point const a(2.0f,3.0f);
	Point const b(6.0f,1.0f);
	Point const c(4.0f,5.0f);
	Point const p (5.0f, 4.0f);

	bool r= bsp(a, b, c, p);
	printBool(r);
}
void test3bis() /*** en dehors du triangle ***/
{
	std::cout << "\n" << "test3bis : OUT. a(0.0f,0.0f); b(1.0f,0.0f); c(0.5f,1.0f); p (0.8f, 0.8f)" << std::endl;
	Point const a(0.0f,0.0f);
	Point const b(1.0f,0.0f);
	Point const c(0.5f,1.0f);
	Point const p (0.8f, 0.8f);

	bool r= bsp(a, b, c, p);
	printBool(r);
}
void test4()/**** sur le segment ****/
{
	std::cout << "\n" << "test 4 : OUT. sur segment. a(0.0f,0.0f); b(1.0f,0.0f); c(0.5f,1.0f); p (0.5f, 0.0f);" << std::endl;
	Point const a(0.0f,0.0f);
	Point const b(1.0f,0.0f);
	Point const c(0.5f,1.0f);
	Point const p (0.5f, 0.0f);

	bool r= bsp(a, b, c, p);
	printBool(r);
}
void test5()/**** dans le triangle ****/
{
	std::cout << "\n" << "test 5 : IN. a(0.0f,0.0f); b(1.0f,0.0f); c(0.5f,1.0f); p (0.5f, 0.5f);" << std::endl;
	Point const a(0.0f,0.0f);
	Point const b(1.0f,0.0f);
	Point const c(0.5f,1.0f);
	Point const p (0.5f, 0.5f);

	bool r= bsp(a, b, c, p);
	printBool(r);
}
void test6()/**** sur un sommet ****/
{
	std::cout << "\n" << "test 6 : OUT. a(0.0f,0.0f); b(1.0f,0.0f); c(0.5f,1.0f); p (0.2f, 0.2f);" << std::endl;
	Point const a(0.0f,0.0f);
	Point const b(1.0f,0.0f);
	Point const c(0.5f,1.0f);
	Point const p (0.5f, 1.0f);

	bool r= bsp(a, b, c, p);
	printBool(r);
}
void test7()/**** dans le triangle ****/
{
	std::cout << "\n" << "test 7 : IN. a(-1.0f,-1.0f); b(1.0f,-1.0f); c(0.0f,1.0f); p (0.0f, 0.0f);" << std::endl;
	Point const a(-1.0f,-1.0f);
	Point const b(1.0f,-1.0f);
	Point const c(0.0f,1.0f);
	Point const p (0.0f, 0.0f);

	bool r= bsp(a, b, c, p);
	printBool(r);
}
void test8()/**** dans le triangle ****/
{	
	std::cout << "\n" << "test 8 : IN. a(0.0f,0.0f); b(1.0f,0.0f); c(0.5f,1.0f); p (0.3f, 0.3f);" << std::endl;
	Point const a(0.0f,0.0f);
	Point const b(1.0f,0.0f);
	Point const c(0.5f,1.0f);
	Point const p (0.3f, 0.3f);

	bool r= bsp(a, b, c, p);
	printBool(r);
}
void test9()/**** sur le segment ****/
{	
	std::cout << "\n" << "test 9 : OUT. sur segment. a(0.0f,0.0f); b(1.0f,0.0f); c(0.5f,1.0f); p (0.2f, 0.3f);" << std::endl;
	Point const a(0.0f,0.0f);
	Point const b(1.0f,0.0f);
	Point const c(0.5f,1.0f);
	Point const p (0.8f, 0.4f);

	bool r= bsp(a, b, c, p);
	printBool(r);
}
void test10()/**** dans le triangle ****/
{
	std::cout << "\n" << "test 10 : OUT. a(0.0f,0.0f); b(1.0f,0.0f); c(0.5f,1.0f); p (1.0f, 0.3f);" << std::endl;
	Point const a(0.0f,0.0f);
	Point const b(1.0f,0.0f);
	Point const c(0.5f,1.0f);
	Point const p (1.0f, 0.3f);

	bool r= bsp(a, b, c, p);
	printBool(r);
}
int main(void)
{
	test1();
	test2();
	test3();
	test3bis();
	test4();
	test5();
	test6();
	test7();
	test8();
	test9();
	test10();
	return (0);
}