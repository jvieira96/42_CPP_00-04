/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:25:37 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/07 17:15:33 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {

private:

	Fixed const _x;
	Fixed const _y;

public:

	Point();
	Point(float const nx, float const ny);
	Point(Point const &other);
	Point &operator = (Point const &other);
	~Point();
	Fixed const &getX() const;
	Fixed const &getY() const;
	
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif