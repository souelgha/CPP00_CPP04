/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:07:07 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/01 15:49:35 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
	#define CURE_H

#include"AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(std::string const &type);
		Cure(const Cure &other);
		Cure& operator=(const Cure &other);
		~Cure();
		AMateria* clone() const;
		void use(ICharacter &target);

};
#endif