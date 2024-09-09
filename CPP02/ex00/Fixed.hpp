/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:32:46 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/09 15:18:27 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
	#define FIXED_H

#include<iostream>
class Fixed
{
	private:
		__int16_t value;   //entier de 16bits pour stocker la valeur
		static const int fract_bit = 8; //partie fractionnelle de l entier en bits
	
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};


#endif
