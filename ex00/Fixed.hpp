/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:45:23 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/06 23:59:18 by rdutenke         ###   ########.fr       */
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

private:
	int				raw;
	static const int	fractional;
};

#endif
