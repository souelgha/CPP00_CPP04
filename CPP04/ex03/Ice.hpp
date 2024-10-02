/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:42:53 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/01 14:43:38 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
	#define ICE_H

#include"AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string const &type);
		Ice(const Ice &other);
		Ice& operator=(const Ice &other);
		~Ice();
		AMateria* clone() const;
		void use(ICharacter &target);

};
#endif