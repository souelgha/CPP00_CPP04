/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:17:57 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/09 12:18:43 by sonouelg         ###   ########.fr       */
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

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	

	ICharacter* bob = new Character("bob");
	std::cout <<"\n";
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout <<"\n";
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
	Actor1->equip(src->createMateria("ice"));	
	Actor1->equip(src->createMateria("cure"));	
	Actor1->equip(src->createMateria("cure"));	
	Actor1->equip(src->createMateria("ice"));
	/*** test materia n existant pas ***/
	// Actor1->equip(src->createMateria("cur"));
	/*** test inventaire plein  ***/
	Actor1->equip(new Cure());

	Ice *iced = new Ice;
	ICharacter* Actor2 = new Character("Jerry");
	Actor2->equip(src->createMateria("cure"));
	Actor2->equip(src->createMateria("cure"));
	Actor2->equip(iced);

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

	/* retire 1 materia et utilise le slot */
	AMateria *tmp1;
	tmp1 = Actor1->getUnequipMat(2);
	Actor1->unequip(2);
	std::cout<< "apres unequip:" << std::endl;
	Actor1->use(2, *Actor2);
	std::cout <<"\n";
	
	/*equip le character d un materia sur le slot vide */
	std::cout<< "apres new equip:" << std::endl;
	Actor1->equip(new Cure());
	std::cout <<"\n";
	Actor1->use(2, *Actor2);
	std::cout <<"\n";

	delete bob;
	delete Actor1;
	delete Actor2;
	delete src;
	delete tmp1;
	
}
void test04()
{
	std::cout << "\n /********* test04: check des constructors *********/" << std::endl;
	Character *me = new Character("ToTo");
	std::cout << "me 	: " << me->getName() << std::endl;
	Character *clone = new Character(*me);
	std::cout << "clone	: " << clone->getName() << std::endl;
	Character *girl = new Character("Barbie");	
	std::cout << "girl	: " << girl->getName() << std::endl;
	
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

int main()
{
	// test01();
	// test02();
	// test03();
	// test04();
	return(0);
}