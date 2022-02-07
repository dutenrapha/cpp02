/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:04:49 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/07 23:34:23 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define  POINT_H
#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point 
{

public:
	Point(void);
	Point(float x, float y);
	Point(const Point& src);
	Point& operator=(Point const & rhs);
	~Point(void);
	
	const Fixed  getx(void)	const;
	const Fixed  gety(void)	const;
private:
	Fixed const x;
	Fixed const y;
};

std::ostream&	operator<<(std::ostream& o, const Point& point);
bool bsp( Point const a, Point const b, Point const c, Point const point);
Fixed CalcTriArea(const Point &a, const Point &b, const Point &c);

#endif
