/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:51:14 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/21 17:54:49 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
	#define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(const PresidentialPardonForm & target);
		PresidentialPardonForm& operator=(const PresidentialPardonForm & target);
		~PresidentialPardonForm();

		void action() const;
	

};
#endif