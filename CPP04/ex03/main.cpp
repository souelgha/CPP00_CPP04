/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:17:57 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/08 19:31:43 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void test01()
{
	std::cout << "\n /********* test01: tests du sujet *********/" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("iced");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void test02()
{
	std::cout << "\n /********* test02: check des clones *********/" << std::endl;
	
	ICharacter *me = new Character("Tom");
	AMateria *nvx1 = new Cure();
	AMateria *nvx2 = new Ice();
	AMateria *nvx3 = nvx1->clone();
	AMateria *nvx4 = nvx2->clone();

	std::cout << CYAN<< "\ncomparaison des adresses " << std::endl;
	std::cout << "Address of nvx1 : " << &nvx1 << std::endl;
	std::cout << "Address of nvx2 : " << &nvx2 << std::endl;
	std::cout << "Address of nvx3 : " << &nvx3 << std::endl;
	std::cout << "Address of nvx4 : " << &nvx4 << "\n" << std::endl;

	nvx1->use(*me);
	nvx2->use(*me);
	nvx3->use(*me);
	nvx4->use(*me);
	std::cout <<"\n";

	delete nvx1;
	delete nvx2;
	delete nvx3;
	delete nvx4;
	delete me;
	
}

void test03()
{
	std::cout << "\n /********* test03: check avec 2 characters *********/" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	ICharacter* Actor1 = new Character("Tom");	

	AMateria* tmp;
	tmp = src->createMateria("ice");
	Actor1->equip(tmp);	
	tmp = src->createMateria("cure");
	Actor1->equip(tmp);	
	tmp = src->createMateria("cure");
	Actor1->equip(tmp);
	tmp = src->createMateria("ice");
	Actor1->equip(tmp);

	ICharacter* Actor2 = new Character("Jerry");
	Actor2->equip(src->createMateria("cure"));
	Actor2->equip(src->createMateria("ice"));

	ICharacter* bob = new Character("bob");
	std::cout <<"\n";
	Actor1->use(0, *bob);
	Actor1->use(1, *bob);
	Actor1->use(2, *bob);
	Actor1->use(3, *bob);
	std::cout <<"\n";

	Actor2->use(0, *Actor1);
	Actor2->use(1, *Actor1);
	Actor2->use(2, *Actor1);
	Actor2->use(3, *Actor1);
	std::cout <<"\n";

	delete bob;
	delete Actor1;
	delete Actor2;
	delete src;
	
}
void test04()
{
	std::cout << "\n /********* test04: check des constructors *********/" << std::endl;
	Character *me = new Character("ToTo");
	std::cout << "me 	: " << me->getName() << std::endl;
	Character *clone = new Character(*me);
	std::cout << "clone	: " << clone->getName() << std::endl;
	Character *girl = new Character("Barbie");	
	std::cout << "girl	: " << girl->getName() << std::endl;\
	
	std::cout << "\n/***** assignment characters ********/" << std::endl;
	*me = *girl;
	*girl = *clone;
	*clone = *me;
	std::cout << "me 	: " << me->getName() << std::endl;
	std::cout << "girl	: " << girl->getName() << std::endl;
	std::cout << "clone	: " << clone->getName() << std::endl;
	


	delete me;
	delete clone;
	delete girl;
}
static void test05(void)
{
	std::cout << "\n /********* test05: check unequip *********/" << std::endl;
	
	ICharacter *Act1 = new Character("Actor 1");
	ICharacter *Act2 = new Character("Actor 2");
	AMateria *ice = new Ice();

	/* Filling Player 1's inventory */
	Act1->equip(new Ice());
	Act1->equip(ice);
	Act1->equip(new Ice());
	Act1->equip(new Cure());
	// Act1->equip(new Cure()); // Over filling Player 1's inventory

	/* Filling Player 2's inventory */
	Act2->equip(new Cure());
	Act2->equip(new Cure());
	Act2->equip(new Ice());

	/* Using materias */
	Act1->use(0, *Act2);
	Act1->use(1, *Act2);
	Act1->use(3, *Act2);
	Act2->use(2, *Act1);

	/* Unequiping materia and use empty slot */
	Act1->unequip(1);
	Act1->use(1, *Act2);

	/* Equiping new materia and use the filled slot */
	Act1->equip(new Cure());
	Act1->use(1, *Act2);

	delete Act1;
	delete Act2;
	delete ice;
}

int main()
{
	// test01();
	// test02();
	// test03();
	// test04();
	test05();
	return(0);
}