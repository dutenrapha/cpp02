/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:18:35 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/07 23:36:45 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void) 
{
	Point	p0;
	Point	p1(4.5, 6.433);
	std::cout << "p0.x = " << p0.getx() << " p0.y = " << p0.gety() << std::endl;
	std::cout << "p1x. = " << p1.getx() << " p1.y = " << p1.gety() << std::endl;

	std::string status;

	Point a(3, 3);
	Point b(7, 4);
	Point c(8, 8);
	Point point[6] = {
						Point(6, 5), // inside
						Point(7, 6), // inside
						Point(5, 5), // inside (on border)
						Point(3, 5), // outside
						Point(-1, -1), // outside
						Point(1.5f, 2.5f), // outside
					};
	std::cout 
		<< "Triangle coordinates:"
		<< std::endl
		<< "a: " << a
		<< " b: " << b
		<< " c: " << c
		<< std::endl;
	for (int i = 0;  i < 6; i++)
	{
		if (bsp(a, b, c, point[i]) == 0)
			status = " is outside";
		else
			status = " is inside";
		std::cout 
			<< "Point "
			<< point[i]
			<< status
			<< std::endl;
	}
	return(0);
}
