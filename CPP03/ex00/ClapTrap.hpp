/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:17:35 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/18 17:04:09 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
	#define CLAPTRAP_H

#include<iostream>
#include<string>
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define MAG "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"

class ClapTrap
{
	private:
		std::string Name;
		unsigned int Hit;
		unsigned int Energy;
		unsigned int Attack; 
	
	public:
		ClapTrap();
		ClapTrap(std::string nom );
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName(void);
		unsigned int getHit(void);
		unsigned int getEnergy(void);
		unsigned int getAttack(void);
		void setName(std::string nom);
		

};

#endif