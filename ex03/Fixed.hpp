/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:45:23 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/07 17:22:24 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_H
#define  Fixed_H
#include <iostream>
#include <cmath>

class Fixed 
{

public:
	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed(void);
	Fixed & operator=(Fixed const & rhs);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed(int const num);
	Fixed(float const num);
	float toFloat(void) const;
	int toInt(void) const;

	bool				operator>(Fixed const & rhs) const;
	bool				operator<(Fixed const & rhs) const;
	bool				operator>=(Fixed const & rhs) const;
	bool				operator<=(Fixed const & rhs) const;
	bool				operator==(Fixed const & rhs) const;
	bool				operator!=(Fixed const & rhs) const;
	Fixed				operator+(Fixed const & rhs) const;
	Fixed				operator-(Fixed const & rhs) const;
	Fixed				operator*(Fixed const & rhs) const;
	Fixed				operator/(Fixed const & rhs) const;
	Fixed&				operator++(void);	
	Fixed				operator++(int);	
	Fixed&				operator--(void);	
	Fixed				operator--(int);
	static Fixed&		min(Fixed& lhs, Fixed& rhs);
	static const Fixed&	min(const Fixed& lhs, const Fixed& rhs);
	static Fixed&		max(Fixed& lhs, Fixed& rhs);
	static const Fixed&	max(const Fixed& lhs, const Fixed& rhs);


private:
	int					raw;
	static const int	fractional;
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif
