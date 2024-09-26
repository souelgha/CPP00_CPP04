/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:07:28 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/26 12:05:57 by sonouelg         ###   ########.fr       */
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
		virtual ~Dog();
		void makeSound() const;
		std::string getIdea(int index) const;
		Brain *getBrain() const;
};
#endif

