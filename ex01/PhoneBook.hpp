/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:30:33 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/06 22:53:17 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
	#define PHONEBOOK_HPP

#include<iostream>
#include<iomanip>
#include<string>
#include "Contact.hpp"

#define W  10
#define MAXCONT 2

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
		void DisplayAll();
		void Displaycategory();
		std::string truncated(std::string str);
		Contact getcontact(int indx);
};
int check_digits(std::string str);
#endif


