/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:22:21 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/15 16:20:49 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0)
{
	std::cout<< "Default constructor called" << std::endl;
}

Point::Point(const float a, const float b):x(a), y(b) 
{
	// std::cout<< "Param constructor called" << std::endl;
}
Point::Point(const Point& other ):x(other.x), y(other.y)
{
	// std::cout<< "Copy constructor called" << std::endl;
}
Point& Point::operator=(const Point& other)
{
	(void)other;
	// std::cout<< "Copy assignment operator called" << std::endl;
	return(*this);
}
Point::~Point()
{
	// std::cout<< "destructor called" << std::endl;
}

Fixed Point::getPointx(void) const
{
	return(x);
}
Fixed Point::getPointy(void) const
{
	return(y);
}


