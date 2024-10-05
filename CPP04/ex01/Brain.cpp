/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:21:32 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/05 11:16:39 by sonouelg         ###   ########.fr       */
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
	std::cout << "[Brain] default constructor called" << std::endl;
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
	std::cout << "[Brain] parameter constructor called" << std::endl;
}
Brain::Brain(const Brain& other)
{
	ideas = new std::string [100];
	for(int i=0; i < 100; ++i)
		this->ideas[i]= other.ideas[i];
	std::cout << "[Brain] Copy constructor called" << std::endl;
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
	std::cout << "[Brain] assignment constructor called" << std::endl;
	return (*this);
}
Brain::~Brain()
{
	delete[] ideas;
	std::cout << "[Brain] destructor called" << std::endl;
}
std::string Brain::getIdea(int index) const
{
	if(index >= 0 && index < 100)
		return ( ideas[index]);
	return("[Brain] Idea Invalid index. ");
}
void Brain::setIdea(int index, std::string idea) 
{
	if(index >= 0 && index < 100)
		this->ideas[index]= idea;
	else 
		std::cout << "Invalid index. Set not possible."<< std::endl;
}
void Brain::printIdeas(void)
{
	for (int i=0; i < 5 ; ++i)
		std::cout << getIdea(i) << std::endl;
		
}
const std::string* Brain::getIdeas() const 
{
	return ideas;
}