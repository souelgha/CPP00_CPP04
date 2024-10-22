/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:05:50 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/22 18:54:41 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}
Intern::~Intern(){}
Intern::Intern(Intern& copy)
{
	(void)copy;
}
Intern& Intern::operator=(Intern& copy)
{
	(void)copy;
	return(*this);
}
const char* Intern::FormDoesntExist::what() const throw() 
{
    return "The requested form doesn't exist.";
}
AForm* Intern::makeForm(std::string const FormName, std::string const target)
{
	std::string TabName[3]=
		{"Shrubbery Creation", 
		"Robotomy Request", 
		"Presidential Pardon"};
	AForm *AForm[3]=
		{ new ShrubberyCreationForm(target), 
		new RobotomyRequestForm(target), 
		new PresidentialPardonForm(target)};
	
	for(int i= 0; i < 3; ++i)
		{
			if(TabName[i] == FormName)
				{
					std::cout<<"Intern creates " << FormName;
					return(AForm[i]);
				}
		}
	throw Intern::FormDoesntExist();
}