/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:04:58 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/10 16:43:50 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
	#define BUREAUCRAT_H

#include <iostream>
// #include <exception>

class Bureaucrat //: std::exception
{
	private:
		std::string const _name;
		unsigned int _grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const &copy);
		
		~Bureaucrat();
		void IncrementGrade();
		void DecrementGrade();
		// void GradeTooHighException(int grade);
		// void GradeTooLowException(int grade);
		// const char *what() const noexcept;
		std::string getName() const;
		unsigned int getGrade() const;

};
std::ostream& operator<<(std::ostream& os,Bureaucrat & buro);

#endif