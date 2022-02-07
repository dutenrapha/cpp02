/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:04:51 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/07 23:35:27 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
	return ;
}

Point::Point(float x, float y): x(x), y(y)
{
	return ;
}

Point::Point(const Point& src) : x(src.getx()), y(src.gety())
{
	*this = src;
	return ;
}

Point& Point::operator=(Point const & rhs)
{
	(void)rhs;
	return(*this);
}

Point::~Point(void)
{
	return ;
}

const Fixed  Point::getx(void)	const
{
	return(this->x);
}

const Fixed  Point::gety(void)	const
{
	return(this->y);
}

std::ostream&	operator<<(std::ostream& o, const Point& point)
{
	o
		<< '('
		<< point.getx()
		<< "," 
		<< point.gety()
		<< ')';
	return (o);
}