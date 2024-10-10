/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:38:00 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/09 11:16:35 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
	#define CHARACTER_H

#include "ICharacter.hpp"


class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria *inventory[4];
	public:
		Character();
		Character(std::string name);
		~Character();
		Character(const Character& copy);
		Character& operator=(const Character& copy);
		std::string const& getName () const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target) ;
		AMateria* getUnequipMat(int idx) const;

};
#endif