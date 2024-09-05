/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:03:11 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/05 15:28:41 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<sstream>

# define DEFAULT "\001\033[0;39m\002"
# define RED "\001\033[1;91m\002"
# define YELLOW "\001\033[1;93m\002"
# define MAGENTA "\001\033[1;95m\002"
# define GRAY "\001\033[1;90m\002"

std::string replacestring(std::string s, std::string str1, std::string str2)
{
	size_t pos=0;
	while((pos = s.find(str1, pos)) != std::string::npos)
	{
		s.erase(pos,str1.length());
		s.insert(pos,str2);	
		pos += str2.length();
	}
	return(s);	
}

int main(int argc, char **argv)
{
	(void)argc;
	if(argc != 4)
	{
		std::cout << RED << "le nombre d arguments n est pas bon" << DEFAULT << std::endl;
	 	return(1);
	}
	std::string srcfile= argv[1];
	std::string suffixe =".replace";
	std::string destfile= argv[1] + suffixe;
	std::string str1=argv[2];
	std::string str2=argv[3];


/********* copie du contenu source dans une string ********************/
	std::ifstream source(srcfile.c_str());
	if(!source)
	{
		std::cout << "le fichier source n existe pas " << std::endl;
		return(1);
	}

	std::string fileContent((std::istreambuf_iterator<char>(source)), std::istreambuf_iterator<char>());
    source.close();
	if(fileContent=="")
	{
		std::cout << RED << "le fichier est vide" << DEFAULT  << std::endl;
		return(1);
	}
	std::string finalVersion= replacestring(fileContent, str1, str2);
	if(finalVersion.compare(fileContent) == 0)
	{
		std::cout << MAGENTA << "pas d occurence trouvee. fichier replace non cree" << DEFAULT  << std::endl;
		return(1);
	}
	std::ofstream dest(destfile.c_str());
	if(!dest)
		std::cout << RED << "impossible d ecrire dans le fichier de destination " << DEFAULT << std::endl;	
	dest << finalVersion;	
	dest.close();
	return(0);	
}
