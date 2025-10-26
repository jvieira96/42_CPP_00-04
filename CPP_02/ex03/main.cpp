/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:18:03 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/07 16:30:50 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


void test(Point const& a, Point const& b, Point const& c, Point const& p) {
	std::cout << "Testing point (" << p.getX() << ", " << p.getY() << "): ";
	if (bsp(a, b, c, p))
		std::cout << "INSIDE the triangle\n";
	else
		std::cout << "OUTSIDE the triangle\n";
}

int main() {
	// Define triangle ABC
	Point a(0.0f, 0.0f);
	Point b(5.0f, 0.0f);
	Point c(0.0f, 5.0f);

	std::cout << "Triangle vertices:\n";
	std::cout << "A(" << a.getX() << ", " << a.getY() << ")\n";
	std::cout << "B(" << b.getX() << ", " << b.getY() << ")\n";
	std::cout << "C(" << c.getX() << ", " << c.getY() << ")\n";
	std::cout << "------------------------\n";

	// Test cases
	test(a, b, c, Point(1.0f, 1.0f)); // inside
	test(a, b, c, Point(5.0f, 5.0f)); // outside
	test(a, b, c, Point(0.0f, 0.0f)); // vertex
	test(a, b, c, Point(2.5f, 0.0f)); // on edge AB
	test(a, b, c, Point(0.0f, 2.5f)); // on edge AC
	test(a, b, c, Point(2.0f, 2.0f)); // inside

	return 0;
}