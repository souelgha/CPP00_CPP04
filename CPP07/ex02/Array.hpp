/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:02:38 by sonouelg          #+#    #+#             */
/*   Updated: 2024/11/04 18:40:56 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

template <typename T>
class Array
{
	private :
		T *rawArray;
		unsigned int _size;
	public:
		Array(): rawArray(NULL), _size(0){}
		Array(unsigned int const n);
		T & operator[](unsigned int position) const; // ajouter une exception si oor
		unsigned int size() const;
	
};
/***** implementations  *****/
template<typename T>
Array<T>::Array(unsigned int n): _size(n)
{
	rawArray(new T[n]);
	for (unsigned int i = 0; i < n ; ++i)
		rawArray[i] = T();
	
}
template<typename T>
unsigned int Array<T>::size() const
{
	return( sizeof(rawArray)/sizeof(rawArray[0]));
}