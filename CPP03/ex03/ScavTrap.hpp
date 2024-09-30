/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:36:55 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/30 17:46:54 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
	#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string Name );
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		virtual ~ScavTrap();
		void attack(const std::string& target);
		void guardGate(void);

};

#endif