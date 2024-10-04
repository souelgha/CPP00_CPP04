/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:59:42 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/04 17:15:27 by sonouelg         ###   ########.fr       */
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
	int N = 4;
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
	std::cout << "\n/********* Deep Copy  address Brain ***********/\n"<< std::endl;
	const Dog dog1;
	const Dog dog2=dog1;
	const Cat cat1;
	const Cat cat2=cat1;
	Cat cat3;
	std::cout << YELLOW ;
	std::cout << "Address of cat3 Brain 1: " << cat3.getBrain() << std::endl;
	// const std::string* ideasAddress = cat3.getBrain()->getIdeas();
	std::cout << "Address of cat3 Brain 1 ideas: " << cat3.getBrain()->getIdeas()<< std::endl;	
	std::cout << WHITE ;
	cat3=cat1;
	std::cout << YELLOW<< "\n comparaison des adresses dog1 and dog2 " << std::endl;
    std::cout << "Address of dog1 Brain: " << dog1.getBrain() << std::endl;
    std::cout << "Address of dog2 Brain: " << dog2.getBrain() << std::endl;	
	std::cout << "\n comparaison des adresses cat1 and cat2 " << std::endl;
    std::cout << "Address of cat1 Brain: " << cat1.getBrain() << std::endl;
    std::cout << "Address of cat2 Brain: " << cat2.getBrain() << std::endl;	
	std::cout << "Address of cat3 Brain: " << cat3.getBrain() << std::endl;
	std::cout << "Address of cat3 Brain 1 ideas: " << cat3.getBrain()->getIdeas()<< std::endl;	
	std::cout << WHITE << std::endl;
}

void test05()
{
	/******* class Animal abstraite non instanciable : error de compil *****/
	// const Animal* animal1 = new Animal();
	// const Dog* Dog1 = new Dog();
	// const Cat* Cat1 = new Cat();
	// delete animal1;
	// delete Dog1;
	// delete Cat1;

}
int main()
{
	// test01();
	// test02();
	test03();
	// test05();
	return(0);
}
	
	
	
