/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:39:48 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/22 12:23:03 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void test01()
{
	try
	{
		std::cout << "\n/***** test01 *****/\n" << std::endl;
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
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	test01();
	return(0);
}