/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:03:11 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/04 17:56:52 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>

int main(int argc, char **argv)
{
	(void)argc;
	if(argc == 1)
	 	return(1);
	
	std::string srcfile= argv[1];
	std::string suffixe =".replace";
	std::string destfile= argv[1] + suffixe;
	std::cout << destfile << srcfile<< std::endl;
	std::string str1="est a 42"; //argv[2]
	std::string str2="vit a Paris"; //argv[3]
	std::string s="coucou on est a 42 aujourd hui. et toi ?";

/********* copie du contenu dans le fichier replace ********************/
	std::ifstream source(srcfile.c_str(), std::ios::binary);
	std::ofstream dest(destfile.c_str(), std::ios::binary);
	if(!source || !dest)
	{
		std::cerr << "file n existe pas" << std::endl;
		return(1);
	}
	else
	{
		std::cout << "files crees" << std::endl;
		dest << source.rdbuf();
	}

/********** remplacer le contenu dans le fichier *****************/
	std::string::size_type n;
	n =s.find(str1);
	std::string last= s.substr(n);
	s.erase(n,str1.length());	
	std::cout << "_string1: '" << s << std::endl;					//delete une partie de la string	
	s.insert(n,str2);				//insert la str2 dans a a la position n	
	std::cout << "_string2: '" << s << std::endl;

	return(0);
	
}




/*****afficher le contenu du fichier ******/
	// while(1)
	// {
	// 	orig_file >> ch;
	// 	if (orig_file.eof())
	// 		break;
	// 	std::cout << ch ;
	// }
/** attention a bien gerer les espaceslor de l affichage .il ne sont pas prsents ici dans l exemple */
/*** creer la fonction replace  */
/** trouver la position du debut de la string : n***/
/*** calculer la longueur de la string a remplacer str1*/
/*** calculer la longueur de la nouvelle string str2 */

// std::string string_replace(std::string str1, std::string str2)
// {

// }