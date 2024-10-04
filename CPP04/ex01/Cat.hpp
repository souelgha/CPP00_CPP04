/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:09:13 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/03 18:00:37 by sonouelg         ###   ########.fr       */
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
		~Cat();
		void makeSound() const;
		Brain *getBrain() const;

};
#endif