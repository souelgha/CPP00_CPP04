/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:30:55 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/30 17:46:40 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
	#define DIAMONDTRAP_H

#include"ScavTrap.hpp"
#include"FragTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
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