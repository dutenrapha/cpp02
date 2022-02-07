/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:09:17 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/07 16:49:47 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->raw = 0;
	std::cout << "Default constructor called"<< std::endl;
	return ;
}

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called"<< std::endl;
	this->raw = num << this->fractional;
	return ;
}

Fixed::Fixed(float const num)
{
	std::cout << "Float constructor called"<< std::endl;
	this->raw = roundf(num * (1 << this->fractional));
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
	return(this->raw);
}

void Fixed::setRawBits(int const raw)
{
	this->raw = raw;
	return ;
}

float Fixed::toFloat( void ) const
{
	return	((float)(this->raw / (float)(1 << this->fractional)));
}

int Fixed::toInt( void ) const
{
	return(this->raw >> this->fractional);
}

int const	Fixed::fractional = 8;

std::ostream & operator<<(std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return(o);
}