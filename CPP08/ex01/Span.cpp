/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:02:19 by sonouelg          #+#    #+#             */
/*   Updated: 2024/11/08 17:58:13 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(int size): N(size)
{
	tab.reserve(N);
}
Span::~Span(){}
Span::Span(const Span& copy): N(copy.N), tab(copy.tab){}
Span& Span::operator=(const Span& copy)
{
	if(this != &copy)
	{
		this->N=copy.N;
		this->tab= copy.tab;
	}
	return(*this);
}
void Span::addNumber(int num)
{
	// std::cout <<" size : " << tab.size() <<" | N= "<< N << std::endl;
	if((tab.size()) >= N)
		throw std::out_of_range("vector is full. no more space");
	tab.push_back(num);
	// std::cout <<"num: " << num << " | addnum: " << tab.back() <<" | "<< tab.size()-1 << std::endl;
}
const char* Span::lesThanTwoException::what() const throw() 
{
    return "Not enough number. need at least 2";
}
int Span::shortestSpan()
{
	if(tab.size() < 2 || tab.empty())
		throw Span::lesThanTwoException();
	int num = abs(tab[0] - tab[1]);
	for (size_t i = 0; i < N - 1; ++i)
	{
		for(size_t j = i + 1 ; j < N ; ++j)
		{
			if(abs(tab[i] -  tab[j] ) < num)
				num = abs(tab[i] -  tab[j] );			
		}
	}
	return(num);
}
int Span::longestSpan()
{
	if(tab.size() < 2 || tab.empty())
		throw Span::lesThanTwoException();
	int num = abs(tab[0] - tab[1]);
	for (size_t i = 0; i < N - 1; ++i)
	{
		for(size_t j = i + 1 ; j < N ; ++j)
		{
			if(abs(tab[i] -  tab[j] ) > num)
				num = abs(tab[i] -  tab[j]);	
		}
	}
	return(num);
}
//version rnge of iterator.
// void Span::addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end) {
//     // Vérifie si l'ajout de la plage d'itérateurs dépasserait la capacité N
//     if (tab.size() + std::distance(start, end) > N) {
//         throw std::overflow_error("Erreur : ajout dépassant la capacité maximale du vector.");
//     }

//     // Ajoute les éléments de la plage au vector
//     tab.insert(tab.end(), start, end);
// }
