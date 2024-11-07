/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:12:23 by sonouelg          #+#    #+#             */
/*   Updated: 2024/11/07 18:30:28 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<algorithm>
#include<exception>
#include<vector>
#include<list>
#include<iterator>

class Span
{
	private:
		unsigned int N;
		std::vector<int> tab;
	public:
		Span(int size);
		~Span();
		

		void addNumber(int num);
		// void display() const;
};
// Span(const Span& copy);
		// Span& operator=(const Span& copy);