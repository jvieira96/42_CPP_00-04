/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:32:58 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/07 17:45:35 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : _x(0) , _y(0) {};

Point::Point(float const nx, float const ny) : _x(nx), _y(ny) {
}

Point::Point(Point const &other) : _x(other.getX()), _y(other.getY()) {
}

Point &Point::operator = (Point const &other) {
	if (this == &other)
		return *this;
	return *this;
}

Point::~Point() {}

Fixed const &Point::getX() const {
	return this->_x;
}

Fixed const &Point::getY() const {
	return this->_y;
}
