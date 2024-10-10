/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:37:55 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/10 16:45:54 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("noname"),_grade(150) {}
Bureaucrat::Bureaucrat(std::string name, unsigned int grade):_name(name),_grade(grade) {}
Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	this-> _grade = copy._grade;
}
Bureaucrat::~Bureaucrat(){}
std::string Bureaucrat::getName() const
{
	return(this->_name);
}
unsigned int Bureaucrat::getGrade() const
{
	return(this->_grade);
}
void Bureaucrat::IncrementGrade() 
{
	this->_grade--;
}
void Bureaucrat::DecrementGrade() 
{
	this->_grade++;
}
std::ostream& operator<<(std::ostream& os, Bureaucrat& buro)
{
	os << buro.getName() << " , bureaucrat grade " << buro.getGrade();
	return(os);
}