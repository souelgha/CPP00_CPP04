/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:11:06 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/06 13:53:52 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(void)
{
	Harl alarm;

	alarm.complain("DEBUG");
	alarm.complain("INFO");
	alarm.complain("WARNING");
	alarm.complain("ERROR");
	alarm.complain("toto");
	alarm.complain("");
	return(0);
}
