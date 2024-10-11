/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:52:56 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/11 19:02:13 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
	#define FORM_H

#include "Bureaucrat.hpp"

#define TOSIGNED 1
#define TOEXECUTE 150

class Form
{
	private:
		std::string const _name;
		bool _status;
		unsigned int const _gradeToSigned;
		unsigned int const _gradeToExecute;
	
	public:
		Form();
		Form(std::string name, unsigned int tosigned, unsigned int toexec);
		Form(const Form& copy);
		Form& operator=(const Form& copy);
		~Form();

		std::string getName() const;
		unsigned int getGradToSign() const;
		unsigned int getGradToExec() const;
		bool getStatus() const;

		void beSigned(Bureaucrat& buro);
		class GradeTooLowException: public std::exception
		{	
			public:
				const char *what() const throw();
		};
		class GradeTooHighException: public std::exception
		{	
			public:
				const char *what() const throw();
		};
};
std::ostream& operator<<(std::ostream& os, Form & paper);

#endif