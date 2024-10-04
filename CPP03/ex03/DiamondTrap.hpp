/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:30:55 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/04 10:11:44 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
	#define DIAMONDTRAP_H

#include"ScavTrap.hpp"
#include"FragTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _Name;
	public:
		DiamondTrap();
		DiamondTrap(std::string Name );
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap& operator=(const DiamondTrap& other);
		~DiamondTrap();
		void attack(const std::string& target);
		void whoAmI(void);

};



#endif