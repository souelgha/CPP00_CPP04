/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:52:59 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/21 14:28:39 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():
	_name("unknown_Form"), _status(false),_gradeToSigned(TOSIGNED), _gradeToExecute(TOEXECUTE) {}
Form::Form(std::string name, unsigned int tosigned, unsigned int toexec):
	_name(name), _status(0),_gradeToSigned(tosigned), _gradeToExecute(toexec){}
Form::~Form(){}
Form::Form(const Form& copy):
	_gradeToSigned(copy._gradeToSigned), _gradeToExecute(copy._gradeToExecute){}
Form& Form::operator=(const Form& copy)
{
	(void)copy;
	return(*this);
}

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
		std::cout << this->_name <<" Form is already signed. " << std::endl;
	}
	try 
	{
		if(_gradeToSigned >= buro.getGrade())
		{
			this->_status = true;
			std::cout << buro.getName() ;
			std::cout << " signed " << this->_name << std::endl;
		}
		else 
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr <<RED << e.what() << WHITE<< std::endl;
	}
}
std::ostream& operator<<(std::ostream& os, Form & infos)
{
	os << infos.getName() << " Form needs grade " 
	<< infos.getGradToSign() << " to sign and grade "
	<< infos.getGradToExec() << " to execute." << "\n";
	return(os);
}
const char* Form::GradeTooHighException::what() const throw()
{
	return("Grade Too High to signed!");
}
const char* Form::GradeTooLowException::what() const throw()
{
	return("Grade Too Low to Signed! ");
}