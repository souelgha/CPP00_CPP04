/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:17:35 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/30 17:47:06 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
	#define CLAPTRAP_H

#include<iostream>
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"


class ClapTrap
{
	protected:
		std::string _Name;
		unsigned int Hit_points;
		unsigned int Energy_points;
		unsigned int Attack_damage;
	
	public:
		ClapTrap();
		ClapTrap(std::string Name );
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		virtual ~ClapTrap();
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName(void);
		unsigned int getHit(void);
		unsigned int getEnergy(void);
		unsigned int getAttack(void);
		void setName(std::string nom);	

};

#endif