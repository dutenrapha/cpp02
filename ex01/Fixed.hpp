/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:45:23 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/07 00:36:42 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_H
#define  Fixed_H
#include <iostream>

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

private:
	int				raw;
	static const int	fractional;
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif
