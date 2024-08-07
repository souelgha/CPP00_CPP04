/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:30:33 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/07 17:23:48 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
	#define PHONEBOOK_HPP

#include<iostream>
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

	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void DisplayOne(int index);
		void Search();
		void Displaycategory();
		std::string truncated(std::string str);
		Contact getcontact(int indx);
};

#endif


