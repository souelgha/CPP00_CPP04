/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:47:45 by sonouelg          #+#    #+#             */
/*   Updated: 2024/11/04 17:17:12 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

template<typename I>
void addtwo(I &i)
{
	i+=2;
}

template<typename A , typename F>
void iter(A* array, size_t b, F func){
	for (size_t i = 0; i < b; ++i)
		func(array[i]);
}


