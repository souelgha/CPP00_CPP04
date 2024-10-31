/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:19:46 by sonouelg          #+#    #+#             */
/*   Updated: 2024/10/31 17:44:05 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
	#define WHATEVER_H

#include<iostream>

template<class T>
T max(T a, T b)
{
	if(a > b)
		return(a);
	else
		return(b);
}
template<class T>
T min(T a, T b)
{
	if(a < b)
		return(a);
	else
		return(b);
}
template<typename S>
void swap(S &a, S &b)
{
	 S temp;
	 temp = a;
	 a = b;
	 b = temp;
}
#endif
