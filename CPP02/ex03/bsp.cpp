/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:54:38 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/15 16:23:09 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

Fixed AreaTriangleF(const Point& a, const Point& b, const Point& c) 
{
	Fixed z(0.5f);
	Fixed const s(-1.0f);
	Fixed area;
	area = z * (a.getPointx() * (b.getPointy() - c.getPointy()) 
			  + b.getPointx() * (c.getPointy() - a.getPointy()) 
			  + c.getPointx() * (a.getPointy() - b.getPointy()));
	if (area < 0)
		area = area.operator*(s);
	return(area);
}
bool check_posSommet(const Point& a, const Point& b, Point const c, Point const point)
{
	if(point.getPointx().operator==(a.getPointx()) && point.getPointy().operator==(a.getPointy()))
		return(true);
	else if (point.getPointx().operator==(b.getPointx()) && point.getPointy().operator==(b.getPointy()))
		return(true);
	else if (point.getPointx().operator==(c.getPointx()) && point.getPointy().operator==(c.getPointy()))
		return(true);
	else 
		return(false);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (check_posSommet(a, b, c, point))
	{
		std::cout << "ici"<< std::endl;
		return(false);
	}
	Fixed air_tri = AreaTriangleF(a, b, c);
	std::cout << "aire du triangle = " << air_tri << std::endl;
	Fixed air_p1 = AreaTriangleF(a, b, point);
	std::cout << "aire_abp du triangle = " << air_p1 << std::endl;
	Fixed air_p2 = AreaTriangleF(a, c, point);
	std::cout << "aire_acp du triangle = " << air_p2 << std::endl;
	Fixed air_p3 = AreaTriangleF(b, c, point);
	std::cout << "aire_bcp du triangle = " << air_p3 << std::endl;

	Fixed const all = air_p1 + air_p2 + air_p3;
	std::cout << "all: " << all << "\ttri: " << air_tri << std::endl;
	if (air_tri.operator==(all))
		return(true);
	else 
		return(false);	
}