/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:00:16 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/02 16:50:08 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
	#define WEAPON_H

#include<iostream>
#include<string>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(const std::string name);
	~Weapon();
	void setType(const std::string arm);
	const std::string& getType(void);
};



#endif
