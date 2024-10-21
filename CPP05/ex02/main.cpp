/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:39:48 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/21 18:53:31 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include"AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


void test02()
{
	Bureaucrat J("Jerry",145);
	Bureaucrat DoIt("Executor",137);
	J << std::cout;
	DoIt << std::cout;
	ShrubberyCreationForm test("Home");
	std::cout << test;
	J.signForm(test);
	test.execute(DoIt);
	// RobotomyRequestForm Robot("IRobot");
	// J.signForm(Robot);
	// Robot.action();
	// PresidentialPardonForm me("Worker");
	// J.IncrementGrade();
	// J.signForm(me);
	// me.action();
	
}

int main()
{
	test02();
	return(0);
}