/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:59:42 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/24 17:48:49 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound(); 
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	return(0);
}
	
	
	
