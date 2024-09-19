/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:11:06 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/11 15:27:52 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(void)
{
	Harl alarm;

	std::cout << "\n---------------- DEBUG test     ---------------" <<std::endl;
	alarm.complain("DEBUG");
	std::cout << "\n---------------- INFO test       ---------------" <<std::endl;
	alarm.complain("INFO");
	std::cout << "\n---------------- WARNING test     ---------------" <<std::endl;
	alarm.complain("WARNING");
	std::cout << "\n---------------- ERROR test       ---------------" <<std::endl;
	alarm.complain("ERROR");
	std::cout << "\n---------------- other string test ---------------" <<std::endl;
	alarm.complain("toto");
	alarm.complain("");
	std::cout << "\n---------------- END OF TESTING     ---------------" <<std::endl;
	return(0);
}
