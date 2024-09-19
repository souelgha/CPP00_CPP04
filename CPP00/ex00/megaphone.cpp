/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:30:46 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/30 11:35:19 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int main(int argc, char **argv) 
{
	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	int i;
		
	for(i = 1; i < argc; i++)
	{
			std::string str = argv[i];
			for (size_t j= 0; j < str.length(); j++)
			{
				char ch =toupper(str[j]);
				std::cout << ch;
			}
	}
	std::cout << "" <<std::endl;
	return (0);
} 
