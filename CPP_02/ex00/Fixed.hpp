/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:41:23 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/05 17:11:23 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {

private: 

	int _fixednbr;
	static const int _fracbits = 8;

public:
	
	Fixed();
	Fixed(const Fixed &copy);
	Fixed& operator =(const Fixed& src);
	~Fixed();
	void setRawBits(int const raw);
	int getRawBits(void) const;
};




#endif