/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:59:42 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/05 11:42:27 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

/******** test 01 ********/
void test01()
{
	std::cout << "\n/********* test 01: tableaux d animaux ***********/\n"<< std::endl;
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
	std::cout << "\n/********* test 02: tableaux de Wronganimaux ***********/\n"<< std::endl;
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
	std::cout << "\n/********* Deep Copy  tests ***********/\n"<< std::endl;
	const Dog dog1;
	const Dog dog2=dog1;
	Dog dog3;
	dog3= dog1;
	const Cat cat1;
	const Cat cat2=cat1;
	Cat cat3;
	cat3=cat1;

	std::cout << "/***** apres assignation et copie  comparaison des Adress *****/ "<< std::endl;
	std::cout << CYAN<< "\ncomparaison des adresses des cats " << std::endl;
	std::cout << "Address of cat1 : " << &cat1 << std::endl;
	std::cout << "Address of cat2 : " << &cat2 << std::endl;
	std::cout << "Address of cat3 : " << &cat3 << std::endl;
    std::cout << "Address of cat1 Brain: " << cat1.getBrain() << std::endl;
    std::cout << "Address of cat2 Brain: " << cat2.getBrain() << std::endl;
	std::cout << "Address of cat3 Brain: " << cat3.getBrain() << std::endl;
	std::cout << "Address of cat3 Brain ideas: " << cat3.getBrain()->getIdeas()<< std::endl;	
	std::cout << "Address of cat3 Brain ideas: " << cat2.getBrain()->getIdeas()<< std::endl;	
	std::cout << "Address of cat3 Brain ideas: " << cat3.getBrain()->getIdeas()<< std::endl;
	std::cout << YELLOW<< "\ncomparaison des adresses des dogs " << std::endl;
    std::cout << "Address of dog1 : " << &dog1 << std::endl;
	std::cout << "Address of dog2 : " << &dog2 << std::endl;
	std::cout << "Address of dog3 : " << &dog3 << std::endl;
	std::cout << "Address of dog1 Brain: " << dog1.getBrain() << std::endl;
    std::cout << "Address of dog2 Brain: " << dog2.getBrain() << std::endl;
	std::cout << "Address of dog3 Brain: " << dog3.getBrain() << std::endl;
	std::cout << "Address of dog1 Brain ideas: " << dog1.getBrain()->getIdeas() << std::endl;
    std::cout << "Address of dog2 Brain ideas: " << dog2.getBrain()->getIdeas() << std::endl;
	std::cout << "Address of dog3 Brain ideas: " << dog3.getBrain()->getIdeas() << std::endl;

	std::cout << WHITE << std::endl;
}

void test06()
{
	// /******* class Animal abstraite non instanciable : error de compil *****/
	// const Animal* animal1 = new Animal();
	// const Dog* Dog1 = new Dog();
	// const Cat* Cat1 = new Cat();
	// delete animal1;
	// delete Dog1;
	// delete Cat1;

}
int main()
{
	test01();
	test02();
	test03();
	// test06();
	return(0);
}
	
	
	
