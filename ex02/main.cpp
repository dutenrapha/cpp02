/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:18:35 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/07 17:55:00 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl;
	Fixed c( Fixed( 48.0256f ) / Fixed( 4 ) );
	std::cout <<"c = " <<  c << std::endl;
	std::cout <<"--c = " <<  --c << std::endl;
	std::cout <<"c = " <<  c << std::endl;
	std::cout <<"c-- = " <<  c-- << std::endl;
	std::cout <<"c = " <<  c << std::endl;
	std::cout <<"min(c,b) = " <<  Fixed::min(c, b ) << std::endl;
	bool d;
	std::cout <<"a = " << a << " b = " << b << " c = " << c << std::endl;
	d =  a == a;
	std::cout <<"a == a " << d << std::endl;
	d = b != a;
	std::cout <<"b != a " << d << std::endl;
	d = c > a;
	std::cout <<"c > a " << d << std::endl;
	d = b >= a;
	std::cout <<"b >= a " << d << std::endl;
	d = b < a;
	std::cout <<"a < a " << d << std::endl;
	d = a <= c;
	std::cout <<"a <= c " << d << std::endl;
	return(0);
}