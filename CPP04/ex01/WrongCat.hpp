/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:16:14 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/25 12:02:36 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_H
	#define WRONGCAT_H

#include"WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const std::string bete);
		WrongCat(const WrongCat& other);
		WrongCat& operator=(const WrongCat& other);
		virtual ~WrongCat();
		void makeSound() const;

};
#endif