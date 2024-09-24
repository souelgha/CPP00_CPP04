/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:09:13 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/24 17:43:15 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
	#define CAT_H

#include"Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const std::string bete);
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();
		void makeSound() const;
		// virtual std::string getType() const;

};
#endif