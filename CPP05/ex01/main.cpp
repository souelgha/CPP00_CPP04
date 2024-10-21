/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:39:48 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/21 14:25:19 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


void test01()
{
	std::cout << "/***** test01 *****/" << std::endl;
	Bureaucrat J("Jerry",4);
	Form paper("RedPpaper", 3, 140);
	std::cout << YELLOW << paper;
	J << std::cout;
	J.signForm(paper);
	J.IncrementGrade();
	std::cout << YELLOW ;
	J << std::cout;
	J.signForm(paper);
}


int main()
{
	test01();
	return(0);
}