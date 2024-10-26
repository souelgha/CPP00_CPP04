/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:19:56 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/26 18:24:01 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter(){}

bool ExcepType(std::string type)
{
	std::string exceptype[6]={ "-inf", "+inf", "nan", "-inff", "+inff", "nanf"};
	for(int i = 0; i< 6; ++i)
	{
		if(type.compare(exceptype[i])== 0)
				return(true);
	}
	return(false);
}
std::string IsChar(std::string type)
{
	std::string ToChar="";
	if(!std::isdigit(type[0]) &&(type.length() == 1))
	{
		ToChar= "char: '" + static_cast<char>(type[0]);
		ToChar+="'";
		return(ToChar);
	}
	int ToInt= std::atoi(type.c_str());
	if(ToInt <32 || ToInt >126)
		ToChar = "Non displayable";	
	else if ((ExcepType(type)) ||(!std::isdigit(type[0]) &&(type.length() == 2)))
	{
		std::cout << "char: impossible" << std::endl;
		ToChar = "impossible";
	}
	else
	{
		ToChar= "char: '" + static_cast<char>(ToInt);
		ToChar+="'";
	}
	return ToChar;
}
void IsInt(std::string type)
{
	if (ExcepType(type))
		std::cout << "int : impossible" << std::endl;
	else if(std::isdigit(type[0]) || type[0] =='+' || type[0]=='-')
	{
		int ToInt= std::atoi(type.c_str());
		std::cout<< "int: " << ToInt<<std::endl;
	}
	else
		std::cout << "int: impossible" << std::endl;
}
void ScalarConverter::Convert(const std::string &type)
{
	
	// char convToChar;
	// int convToInt = 0;
	// float convToFloat = 0;
	// double convToDouble = 0;

	// std::string imp= "impossible";
	
	std::cout<< "type length: "<< type.length()<<'\n';
	std::cout<< "char:" << IsChar(type);
	IsInt(type);
	
	
	// // else 
	// // 	std::cout<< "char: " << imp<<std::endl;
	// if(!(std::isdigit(type[0])))
	// {
	// 	std::cout<< "int: " <<imp<< std::endl;
	// 	for(int i = 0; i< 3; ++i)
	// 	{
	// 		if(type.compare(exceptype[i])== 0)
	// 			{
	// 				std::cout<< "float: " << type<<"f" <<std::endl;
	// 				std::cout<<"double: " <<type<<std::endl;
	// 				return;
	// 			}
	// 	}
	// 	std::cout<< "float: " << imp <<std::endl;
	// 	std::cout<<"double: " <<imp <<std::endl;
	// 	return;
	// }	
	// convToInt= std::atoi(type.c_str());
	
	// std::istringstream(type) >> convToInt;
	// std::cout<< "int: " <<convToInt<< std::endl;

	// if(type[type.length() - 1] == 'f')
	// {

	// }
	
	// for(int i = 0; i< type.length(); ++i)
	// {
	// 	if(isalpha(type[i]))
	// }
	
	// {
	// 	std::cout<< "char: " << "Nom displayable" <<std::endl;

	// }
	

}
// convToInt= static_cast<int>(type[0]);
		// convToFloat= static_cast<float>(type[0]);
// std::cout<< convToChar <<std::endl;
// 		convToDouble= static_cast<double>(type[0]);