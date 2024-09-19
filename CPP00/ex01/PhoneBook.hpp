/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:30:33 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/04 09:33:36 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
	#define PHONEBOOK_HPP

#include<iostream>
#include<sstream>
#include<cstdlib>
#include<iomanip>
#include<string>
#include "Contact.hpp"


#define W  10
#define MAXCONT 8

class PhoneBook
{
	private:
		Contact _contacts[MAXCONT];
		int		_index;
		void Displaycategory();
		void DisplayOne(int index);
		std::string truncated(std::string str);

	public:
		PhoneBook();
		~PhoneBook();
		void add();		
		void Search();	
};

#endif


