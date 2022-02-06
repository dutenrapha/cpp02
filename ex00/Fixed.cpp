/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:09:17 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/07 00:13:06 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->raw = 0;
	std::cout << "Default constructor called"<< std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called"<< std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called"<< std::endl;
	*this = src;
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called"<< std::endl;
	if (this != &rhs)
		this->raw = rhs.getRawBits();
	return(*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called"<< std::endl;
	return(this->raw);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called"<< std::endl;
	this->raw = raw;
	return ;
}

int const	Fixed::fractional = 8;