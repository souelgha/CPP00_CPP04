/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:30:33 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/05 17:28:06 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
	#define PHONEBOOK_HPP

#include<iostream>
#include<iomanip>
#include<string>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contacts[8];
		int		_index;
	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search();
		void DisplayOne(int index);
		void DisplayAll(Contact contacts);
		void Displaytest();
		Contact getcontact(int indx);
};

#endif


