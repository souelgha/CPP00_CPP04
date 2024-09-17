/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:54:38 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/17 10:09:16 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

bool OneAllSegment(Point const a, Point const b, Point const c, Point const point);
Fixed AreaTriangleF(const Point& a, const Point& b, const Point& c) 
{
	Fixed z(0.5f);
	Fixed const s(-1.0f);
	Fixed area;
	area = z*(a.getPointx() * (b.getPointy() - c.getPointy()) 
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
		std::cout << "point sur un sommet"<< std::endl;
		return(false);
	}
	else if (OneAllSegment(a,b,c,point))
	{
		std::cout << "point sur un segment"<< std::endl;
		return(false);
	}	
	Fixed air_tri = AreaTriangleF(a, b, c);
	Fixed air_p1 = AreaTriangleF(a, b, point);
	Fixed air_p2 = AreaTriangleF(a, c, point);
	Fixed air_p3 = AreaTriangleF(b, c, point);
	Fixed all = air_p1 + air_p2 + air_p3;
	Fixed tolerance(0.01f); 
	Fixed result = air_tri - all;
	if (result < 0)
		result = all - air_tri;
	if( result < tolerance)
		return(true);
	else
		return(false);
}

Fixed PenteSegment(const Point& a, const Point& b)
{
	Fixed pente;
	pente = (b.getPointy() - a.getPointy()) / (b.getPointx() - a.getPointx());
	return(pente);
}
Fixed OriginSegment(const Point& a, Fixed pente)
{
	Fixed origin;
	origin = a.getPointy() - (pente.operator*(a.getPointx()));
	return(origin);
}
bool OnSegment(const Point& a, const Point& b, const Point& point)
{
	Fixed Origin, r;
	Fixed pente= PenteSegment(a, b);
	if(pente.operator!=(0))
		Origin = OriginSegment(a, pente); 
	else
		Origin =a.getPointy();
	return (point.getPointy().operator==((pente.operator*(point.getPointx())) + Origin));
}

bool OneAllSegment(Point const a, Point const b, Point const c, Point const point)
{
	if(OnSegment(a,b,point) || OnSegment(a,c,point) || OnSegment(b,c,point))
		return(true);
	else
		return(false);
}