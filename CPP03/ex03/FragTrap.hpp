/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:42:39 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/30 17:48:10 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
	#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string Name);
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		virtual ~FragTrap();
		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif