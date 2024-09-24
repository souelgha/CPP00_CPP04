/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:07:28 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/24 17:43:46 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
	#define DOG_H

#include"Animal.hpp"

class Dog : public Animal
{
		public:
		Dog();
		Dog(std::string bete);
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog();
		void virtual makeSound() const;
};
#endif

