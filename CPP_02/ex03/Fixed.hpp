/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:41:23 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/07 16:31:50 by jpedro-f         ###   ########.fr       */
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
	~Fixed();

	// getters setters
	void setRawBits(int const raw);	
	int getRawBits(void) const;

	// nb converters
	float toFloat(void) const;
	int toInt(void) const;

	// arithmactic operators
	Fixed &operator = (const Fixed &other);
	Fixed operator + (const Fixed &other);
	Fixed operator - (const Fixed &other);
	Fixed operator * (const Fixed &other);
	Fixed operator / (const Fixed &other);

	//Comparison booleans
	bool operator > (const Fixed &other) const;
	bool operator < (const Fixed &other) const;
	bool operator >= (const Fixed &other) const;
	bool operator <= (const Fixed &other) const;
	bool operator == (const Fixed &other) const;
	bool operator != (const Fixed &other) const;

	// increment decrement
	Fixed &operator ++();
	Fixed operator ++(int);
	Fixed &operator --();
	Fixed operator --(int);

	// static member functions
	static Fixed &min(Fixed &n1, Fixed &n2);
	static const Fixed &min(const Fixed &n1, const Fixed &n2);
	static Fixed &max(Fixed &n1, Fixed &n2);
	static const Fixed &max(const Fixed &n1, const Fixed &n2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif