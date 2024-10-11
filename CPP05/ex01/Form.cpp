/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:52:59 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/11 19:02:47 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():
	_name("unknown_Form"), _status(false),_gradeToSigned(TOSIGNED), _gradeToExecute(TOEXECUTE) {}
Form::Form(std::string name, unsigned int tosigned, unsigned int toexec):
	_name(name), _status(0),_gradeToSigned(tosigned), _gradeToExecute(toexec){}

Form::Form(const Form& copy):
	_gradeToSigned(copy._gradeToSigned), _gradeToExecute(copy._gradeToExecute){}
Form& Form::operator=(const Form& copy)
{
	(void)copy;
	return(*this);
}
Form::~Form(){}

std::string Form::getName() const
{
	return(this->_name);
}
bool Form::getStatus() const
{
	return(this->_status);
}
unsigned int Form::getGradToExec() const
{
	return(this->_gradeToExecute);
}
unsigned int Form::getGradToSign() const
{
	return(this->_gradeToSigned);
}
void Form::beSigned(Bureaucrat& buro)
{
	if(this->_status == true)
	{
		std::cout << "Form is already signed. " << std::endl;
		return;
	}
	if(_gradeToSigned > buro.getGrade())
		throw Form::GradeTooLowException();
	this->_status = true;
}
std::ostream& operator<<(std::ostream& os, Form & infos)
{
	os << infos.getName() << "Form needs grade " 
	<< infos.getGradToSign() << " to sign and grade "
	<< infos.getGradToExec() << " to execute.";
	return(os);
}
const char* Form::GradeTooHighException::what() const throw()
{
	return("TooHighException");
}
const char* Form::GradeTooLowException::what() const throw()
{
	return("TooLowException");
}