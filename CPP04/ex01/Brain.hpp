/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:55:41 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/25 17:58:13 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
	#define BRAIN_H

#include "Animal.hpp"

class Brain
{
	protected:
		std::string* ideas;
	
	public:
		Brain();
		Brain(std::string *idea);
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		virtual ~Brain();
		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);


};
#endif