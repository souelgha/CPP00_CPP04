/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:39:48 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/23 18:46:23 by sonouelg         ###   ########.fr       */
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
		std::cout << J;
		J.signForm(paper);
		J.IncrementGrade();
		std::cout << J;
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