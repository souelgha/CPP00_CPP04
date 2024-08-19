/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:37:28 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/19 15:48:20 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
	#define CONTACT_HPP

#include<iostream>
#include<string>

class Contact
{
	private:
			std::string _firstname;
			std::string _lastname;
			std::string _nickname;
			std::string _phonenumber;
			std::string _darkestsecret;

	public:
			Contact();
			~Contact();
			std::string getfstn();
			std::string getlstn();
			std::string getnkn();
			std::string getphone();
			std::string getsecret();
			void setfstn(std::string str);
			void setlstn(std::string str);
			void setnkn(std::string str);
			void setphone(std::string str);
			void setsecret(std::string str);
			
};


#endif


