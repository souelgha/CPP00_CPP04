/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:09:13 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/25 14:49:07 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
	#define CAT_H

#include"Animal.hpp"
#include"Brain.hpp"

class Cat : public Animal
{
	private :
		Brain *CatBrain;
	public:
		Cat();
		Cat(const std::string bete);
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		virtual ~Cat();
		void makeSound() const;
		std::string getIdea(int index) const;

};
#endif