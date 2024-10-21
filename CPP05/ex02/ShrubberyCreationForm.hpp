/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:25:51 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/21 18:33:26 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
	#define SHRUBBERYCREATIONFORM_H

#include"AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(const ShrubberyCreationForm & target);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm & target);
		~ShrubberyCreationForm();

		void action() const;
		// void execute(Bureaucrat const & executor) const;
	

};

#endif