/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:20:51 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/02 16:52:32 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
	#define HUMANB_H

#include"Weapon.hpp"

class HumanB
{
	private:
		Weapon *type;
		std::string name;
		
	
	public:
		HumanB(std::string nom);
		~HumanB();
		void attack() const;
		void setWeapon(Weapon& arm);
};

#endif
