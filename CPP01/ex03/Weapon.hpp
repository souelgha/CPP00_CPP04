/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:00:16 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/06 12:06:12 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
	#define WEAPON_H

#include<iostream>
#include<string>

# define DEFAULT "\001\033[0;39m\002"
# define RED "\001\033[0;91m\002"
# define YELLOW "\001\033[0;93m\002"
# define MAGENTA "\001\033[0;95m\002"
# define GRAY "\001\033[4;90m\002"
# define CYAN "\001\033[0;36m\002"

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
