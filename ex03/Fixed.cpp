/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:09:17 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/07 17:39:52 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->raw = 0;
	// std::cout << "Default constructor called"<< std::endl;
	return ;
}

Fixed::Fixed(int const num)
{
	// std::cout << "Int constructor called"<< std::endl;
	this->raw = num << this->fractional;
	return ;
}

Fixed::Fixed(float const num)
{
	// std::cout << "Float constructor called"<< std::endl;
	this->raw = roundf(num * (1 << this->fractional));
	return ;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called"<< std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	// std::cout << "Copy constructor called"<< std::endl;
	*this = src;
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	// std::cout << "Copy assignment operator called"<< std::endl;
	if (this != &rhs)
		this->raw = rhs.getRawBits();
	return(*this);
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	return(this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return(this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return(this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return(this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return(this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return(this->getRawBits() != rhs.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& rhs) const
{
	Fixed	anws;

	anws.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (anws);
}

Fixed	Fixed::operator-(const Fixed& rhs) const
{
	Fixed	anws;

	anws.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (anws);
}

Fixed	Fixed::operator*(const Fixed& rhs) const
{
	Fixed	anws(this->toFloat() * rhs.toFloat());
	return (anws);
}

Fixed	Fixed::operator/(const Fixed& rhs) const
{
	Fixed	anws(this->toFloat() / rhs.toFloat());
	return (anws);
}

Fixed&	Fixed::operator++(void)
{
	this->raw++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	value = *this;

	++(*this);
	return (value);
}

Fixed&	Fixed::operator--(void)
{
	this->raw--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	value = *this;

	--(*this);
	return (value);
}

Fixed&	Fixed::min(Fixed& lhs, Fixed& rhs)
{
	if (lhs < rhs)
		return (lhs);
	else
		return (rhs);
}

const Fixed&	Fixed::min(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs < rhs)
		return (lhs);
	else
		return (rhs);
}

Fixed&	Fixed::max(Fixed& lhs, Fixed& rhs)
{
	if (lhs > rhs)
		return (lhs);
	else
		return (rhs);
}

const Fixed&	Fixed::max(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs > rhs)
		return (lhs);
	else
		return (rhs);
}

int			Fixed::getRawBits(void) const
{
	return(this->raw);
}

void		Fixed::setRawBits(int const raw)
{
	this->raw = raw;
	return ;
}

float		Fixed::toFloat( void ) const
{
	return	((float)(this->raw / (float)(1 << this->fractional)));
}

int			Fixed::toInt( void ) const
{
	return(this->raw >> this->fractional);
}

int const	Fixed::fractional = 8;

std::ostream & operator<<(std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return(o);
}