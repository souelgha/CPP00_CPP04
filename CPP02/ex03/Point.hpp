/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:13:17 by sonouelg          #+#    #+#             */
/*   Updated: 2024/09/18 14:09:20 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
	#define POINT_H

#include"Fixed.hpp"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define MAG "\033[0;35m"
#define CYAN "\033[1;36m"
#define WHITE "\033[0;37m"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	
	
	public:
		Point();
		Point(const float a, const float b);
		Point(const Point& a );
		Point& operator=(const Point& a);
		void setPointx(Fixed const b);
		void setPointy(Fixed const a);
		Fixed getPointx(void) const;
		Fixed getPointy(void) const;
		~Point();
		
};


#endif