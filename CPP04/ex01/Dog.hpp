/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:07:28 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/03 18:00:35 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
	#define DOG_H

#include"Animal.hpp"
#include"Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *DogBrain;
	public:
		Dog();
		Dog(std::string bete);
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog();
		void makeSound() const;
		Brain *getBrain() const;
};
#endif

