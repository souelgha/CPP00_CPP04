/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:03:11 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/06 13:28:26 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<sstream>

# define DEFAULT "\001\033[0;39m\002"
# define RED "\001\033[0;91m\002"
# define YELLOW "\001\033[0;93m\002"
# define MAGENTA "\001\033[0;95m\002"
# define GRAY "\001\033[0;90m\002"
# define CYAN "\001\033[0;36m\002"

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
	if(argc != 4)
	{
		std::cerr << RED << "ERROR : le nombre d arguments n est pas bon" << DEFAULT << std::endl;
	 	return(1);
	}
	std::string srcfile= argv[1];
	std::string suffixe =".replace";
	std::string destfile= argv[1] + suffixe;
	std::string str1=argv[2];
	std::string str2=argv[3];

	std::ifstream source(srcfile.c_str());
	if(!source)
	{
		std::cerr << RED << "ERROR : ouverture impossible. \nverifier que le fichier source existe ;" << "\n";
		std::cerr << "verifier les droits sur le fichier." << std::endl;
		return(1);
	}
	std::string fileContent((std::istreambuf_iterator<char>(source)), std::istreambuf_iterator<char>());
    source.close();
	if(fileContent=="")
	{
		std::cerr << YELLOW << "le fichier est vide" << DEFAULT  << std::endl;
		return(1);
	}
	std::string finalVersion= replacestring(fileContent, str1, str2);
	if(finalVersion.compare(fileContent) == 0)
	{
		std::cerr << MAGENTA << "pas d occurence trouvee. fichier replace non cree" << DEFAULT  << std::endl;
		return(1);
	}
	std::ofstream dest(destfile.c_str());
	if(!dest)
		std::cerr << RED << "ERROR : impossible d ecrire dans le fichier de destination " << DEFAULT << std::endl;	
	dest << finalVersion;	
	dest.close();
	std::cout << CYAN << "nouveau fichier cree avec le contenu modifie" << DEFAULT << std::endl;
	return(0);	
}
