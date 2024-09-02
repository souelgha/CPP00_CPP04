/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:56:37 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/02 16:20:17 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
	#define HUMANA_H

#include"Weapon.hpp"

class HumanA
{
	private:
		Weapon& type;
		std::string name;
	
	public:
		HumanA(std::string nom, Weapon& arm);
		~HumanA();
	void attack() const;
};

#endif

