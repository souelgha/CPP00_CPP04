/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:39:21 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/05 18:27:44 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; ++i)
		Source[i] = NULL;
	std::cout << "[MateriaSource] default constructor called " << std::endl;
}
MateriaSource::MateriaSource(AMateria *src[4])
{
	for(int i = 0; i < 4; ++i)
	{
		if (src[i] != NULL)
			Source[i]= src[i]->clone();
		else
			Source[i] = NULL;
	}
		
	std::cout << "[MateriaSource] para constructor called " << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for(int i = 0; i < 4; ++i)
	{
		if (copy.Source[i] != NULL)
			Source[i]= copy.Source[i]->clone();
		else
			Source[i] = NULL;
	}		
	std::cout << "[MateriaSource] copy constructor called " << std::endl;
}
MateriaSource& MateriaSource::operator=(const MateriaSource& copy)
{
	for(int i=0; i < 4; ++i)
	{
		delete Source[i];
		Source[i] = NULL;
	}
	for(int i = 0; i < 4; ++i)
	{
		if (copy.Source[i] != NULL)
			Source[i]= copy.Source[i]->clone();
		else
			Source[i] = NULL;
	}		
	std::cout << "[MateriaSource] assignement constructor called " << std::endl;
	return(*this);
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4 ; ++i)
		delete Source[i];
	std::cout << "[MateriaSource] destructor called " << std::endl;
}
void MateriaSource::learnMateria(AMateria*materia)
{
	int i;
	for ( i=0; i< 4; ++i)
	{
		if(Source[i] == NULL)
		{
			Source[i] = materia;
			return;
		}					
	}
	std::cerr << YELLOW << "learnMateria is full! " << WHITE << std::endl;
	delete materia;
}
AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4 ; ++i)
	{
		if(type == Source[i]->getType() && this->Source[i])
		{
			// std::cout << GREEN << "Materia type created " << WHITE << std::endl;
			return(Source[i]->clone());
		}
	}
	std::cerr << RED << "Materia type doesn't exist" << WHITE << std::endl;
	return(0);	
}
