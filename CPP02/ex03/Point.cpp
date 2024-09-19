/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:22:21 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/18 14:15:39 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0){}

Point::Point(const float a, const float b):x(a), y(b) {}
Point::Point(const Point& other ):x(other.x), y(other.y){}
Point& Point::operator=(const Point& other)
{
	if(this != &other)
	{
		setPointx(other.getPointx());
		setPointy( other.getPointy());
	}
	return(*this);
}
Point::~Point(){}
Fixed Point::getPointx(void) const
{
	return(x);
}
Fixed Point::getPointy(void) const
{
	return(y);
}
void Point::setPointx(Fixed const a)
{
	(Fixed)this->x = a;
}
void Point::setPointy(Fixed const b)
{
	(Fixed)this->y = b;
}

