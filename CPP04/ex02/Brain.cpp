/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:21:32 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/26 10:58:03 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include<sstream>

Brain::Brain()
{
	ideas = new std::string [100];
		for(int i=0; i < 100; ++i)
	{
		std::stringstream ss;
		ss << i;
		std::string str=ss.str();
		ideas[i]= "Idea numero : " + str;
	}
	std::cout << "[Brain] constructeur par defaut appele" << std::endl;
}

Brain::Brain(std::string *idea): ideas(idea)
{
	ideas = new std::string [100];
	for(int i=0; i < 100; ++i)
	{
		std::stringstream ss;
		ss << i;
		std::string str=ss.str();
		ideas[i]= "Idea numero : " + str;
	}
	std::cout << "[Brain] constructeur avec parametres appele" << std::endl;
}
Brain::Brain(const Brain& other)
{
	ideas = new std::string [100];
	for(int i=0; i < 100; ++i)
		this->ideas[i]= other.ideas[i];
	std::cout << "[Brain] constructeur par copie appele" << std::endl;
}
Brain& Brain::operator=(const Brain& other)
{
	if(this != &other)
	{
		delete[] ideas;
		ideas = new std::string[100];
		for (int i = 0; i < 100 ; ++i)
			this->ideas[i]=other.ideas[i];
	}
	std::cout << "[Brain] constructeur par assignation appele" << std::endl;
	return (*this);
}
Brain::~Brain()
{
	delete[] ideas;
	std::cout << "[Brain] destructeur par defaut appele" << std::endl;
}
std::string Brain::getIdea(int index) const
{
	if(index >= 0 && index < 100)
		return ( ideas[index]);
	return("[Brain] index invalide. ");
}
void Brain::setIdea(int index, std::string idea) 
{
	if(index >= 0 && index < 100)
		this->ideas[index]= idea;
}