/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 14:41:54 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/30 14:44:20 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"PhoneBook_utils.hpp"

int check_digits(std::string str)
{
	for(std::string::iterator it=str.begin(); it!=str.end(); ++it)
	{
		if (!(std::isdigit((*it))))
		{
			std::cout << "Error Phone number: Enter digits between 0 and 9" << std::endl;
			return(0);
		}
	}
	return(1);
}

/**** gestion des isspaces dans les entrees
 ***** utilisation de find et npos  
****** npos est vrai si toute la str est vide (conditions find_first_not_of ())
 */
std::string trim(const std::string str)
{
	std::string nospace;
	std::string whitespaces (" \t\f\v\n\r");
	size_t start = str.find_first_not_of(whitespaces);
	if(start == std::string::npos) 
		return(""); 
	nospace = str.substr(start);
	size_t end = nospace.find_last_not_of(whitespaces);		
	if( end != std::string::npos)
		nospace = nospace.substr(0, end + 1);
	return(nospace);
}