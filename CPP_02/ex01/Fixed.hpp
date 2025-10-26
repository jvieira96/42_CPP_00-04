/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:41:23 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/05 20:35:43 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

private: 

	int _fixednbr;
	static const int _fracbits = 8;

public:
	
	Fixed();
	Fixed(const Fixed &copy);
	Fixed(const int int_nbr);
	Fixed(const float float_nbr);
	Fixed& operator =(const Fixed& src);
	~Fixed();
	void setRawBits(int const raw);
	int getRawBits(void) const;
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);


#endif