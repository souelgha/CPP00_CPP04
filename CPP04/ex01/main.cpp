/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:59:42 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/25 18:02:25 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

/******** test 01 ********/
void test01()
{
	int N = 10;
	const Animal *Animaux[N];
	int i;
	for (i = 0; i < N; ++i)
	{
		if(i%2 == 0)
		{
			Animaux[i] = new Cat();			
		}
		else
			Animaux[i] = new Dog();
	}
	for(i = 0; i<N ; ++i)
	{
		Animaux[i]->makeSound();
	}
	for (i = 0; i < N; ++i)
	{
		delete Animaux[i];
	}
}
void test02()
{
	int N = 10;
	const WrongAnimal *Animaux[N];
	int i;
	for (i = 0; i < N; ++i)
	{
		Animaux[i] = new WrongCat();
		
	}
	for(i = 0; i<N ; ++i)
	{
		Animaux[i]->makeSound();
	}

	for (i = 0; i < 100; ++i)
	{
		delete Animaux[i];
	}

}
void test03()
{
	const Dog dog1;
	std::cout << "Dog1's first idea: " << dog1.getIdea(0) << std::endl;
	const Dog dog2=dog1;
	std::cout << "Dog2's first idea: " << dog2.getIdea(0) << std::endl;
	
	std::cout << "\n comparaison des adresses dog1 and dog2 " << std::endl;
    std::cout << "Addresse de dog1 Brain: " << dog1.getBrain() << std::endl;
    std::cout << "Address of dog2 Brain: " << dog2.getBrain() << std::endl;	
	std::cout << "\nModifying dog1's ideas and checking dog2's ideas:" << std::endl;
    dog1.getBrain()->setIdea(0, "New Idea for Dog1");
    std::cout << "Dog1's first idea after modification: " << dog1.getIdea(0) << std::endl;
    std::cout << "Dog2's first idea (should be unchanged): " << dog2.getIdea(0) << std::endl;

}

int main()
{
	// test01();
	// test02();
	test03();
	return(0);
}
	
	
	
