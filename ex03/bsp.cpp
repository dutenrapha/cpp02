/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:06:13 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/07 23:32:55 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed TotalArea = CalcTriArea(a, b, c);
	Fixed Area1 = CalcTriArea(point, b, c);
	Fixed Area2 = CalcTriArea(point, a, c);
	Fixed Area3 = CalcTriArea(point, a, b);
	
	if((Area1 + Area2 + Area3) > TotalArea)
		return(false);
	else
		return(true);
}

Fixed CalcTriArea(const Point &a, const Point &b, const Point &c)
{
	Fixed	det;

	det = 0.0f;
	det = ((a.getx() - c.getx()) * (b.gety() - c.gety())) - ((b.getx() - c.gety()) * (a.gety() - c.gety()));
	return (det / 2.0f);
}
