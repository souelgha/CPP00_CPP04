/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:59:42 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/30 20:22:51 by sonia            ###   ########.fr       */
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
	for (i = 0; i < N; ++i)
	{
		delete Animaux[i];
	}
}
void test03()
{
	std::cout << "/********* Deep Copy  address Brain ***********/"<< std::endl;
	const Dog dog1;
	const Dog dog2=dog1;
	std::cout << "\n comparaison des adresses dog1 and dog2 " << std::endl;
    std::cout << "Addresse de dog1 Brain: " << dog1.getBrain() << std::endl;
    std::cout << "Address of dog2 Brain: " << dog2.getBrain() << std::endl;	
}

void test04()
{
	std::cout << "/********* Deep Copy compar idea ***********/"<< std::endl;
	const Dog dog1;
	dog1.getBrain()->setIdea(0, "Heeelo je suis Dog1! ");
	dog1.getBrain()->printIdeas();
	const Dog dog2=dog1;
	dog2.getBrain()->printIdeas();
	dog2.getBrain()->setIdea(0, "Hello je suis Dog2! ");
	
	
	std::cout << "\n comparaison des ideas dog1 et dog2 " << std::endl;
    std::cout << "idea 0 dog1 Brain: " << dog1.getIdea(0) << std::endl;
    std::cout << "idea 0 dog2 Brain: " << dog2.getIdea(0) << std::endl;	
}

int main()
{
	test04();
	// test02();
	// test03();
	return(0);
}
	
	
	
