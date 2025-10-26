/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:20:18 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/07 17:46:00 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <math.h>

static float triangleArea(const Point a, const Point b, const Point c) {
	
	float part1 = a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat());
	float part2 = b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat());
	float part3 = c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat());	
	
	float area = std::abs((part1 + part2 + part3) / 2);

	return std::abs(area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	
	float A1 = triangleArea(point, a, b);
	float A2 = triangleArea(point, b, c);
	float A3 = triangleArea(point, c, a);
	float A0 = triangleArea(a, b, c);
	float epsilon = 0.0001f;

	if (A1 < epsilon || A2 < epsilon || A3 < epsilon) {
		return false;
	}
	if (std::abs((A1 + A2 + A3) - A0) < epsilon) {
		return true;
	}
	return false;
}