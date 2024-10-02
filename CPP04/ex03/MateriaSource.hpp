/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:55:59 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/02 10:24:38 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
	#define MATERIASOURCE_H

#include"IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *Source[4];
	
	public:
		MateriaSource();
		MateriaSource(AMateria *src[4]);
		MateriaSource(const MateriaSource& copy);
		MateriaSource& operator=(const MateriaSource& copy);
		~MateriaSource();
		void learnMateria(AMateria*materia);
		AMateria* createMateria(std::string const &type);
};
#endif