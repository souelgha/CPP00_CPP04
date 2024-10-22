/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:51:35 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/21 18:16:48 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const target):AForm(target, 25, 5) {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & target): AForm(target){}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & target)
{
	if(this != &target)
		AForm::operator=(target);
	return(*this);
}
PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::action()const
{
	std::cout <<this->getName() << " has been pardoned by Zaphod Beeblebrox. Congratulations !" << std::endl;
}