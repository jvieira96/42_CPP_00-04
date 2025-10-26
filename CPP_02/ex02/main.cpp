/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 20:25:31 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/06 16:59:56 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;

}



/* int main() {
	std::cout << "--- Constructors ---" << std::endl;
	Fixed a;                        // default constructor
	Fixed b(10);                    // int constructor
	Fixed c(3.14f);                 // float constructor
	Fixed d(b);                     // copy constructor
	Fixed e;                        // assignment operator
	e = c;

	std::cout << "a (default): " << a << std::endl;
	std::cout << "b (int 10): " << b << std::endl;
	std::cout << "c (float 3.14): " << c << std::endl;
	std::cout << "d (copy of b): " << d << std::endl;
	std::cout << "e (assigned from c): " << e << std::endl;

	std::cout << "\n--- Arithmetic ---" << std::endl;
	Fixed x(5.5f);
	Fixed y(2);

	std::cout << "x: " << x << ", y: " << y << std::endl;
	std::cout << "x + y = " << (x + y) << std::endl;
	std::cout << "x - y = " << (x - y) << std::endl;
	std::cout << "x * y = " << (x * y) << std::endl;
	std::cout << "x / y = " << (x / y) << std::endl;

	std::cout << "\n--- Comparisons ---" << std::endl;
	std::cout << "x > y: " << (x > y) << std::endl;
	std::cout << "x < y: " << (x < y) << std::endl;
	std::cout << "x >= y: " << (x >= y) << std::endl;
	std::cout << "x <= y: " << (x <= y) << std::endl;
	std::cout << "x == y: " << (x == y) << std::endl;
	std::cout << "x != y: " << (x != y) << std::endl;

	std::cout << "\n--- Increment / Decrement ---" << std::endl;
	Fixed inc(10);
	std::cout << "inc: " << inc << std::endl;
	std::cout << "++inc: " << ++inc << std::endl;
	std::cout << "inc++: " << inc++ << std::endl;
	std::cout << "inc after inc++: " << inc << std::endl;
	std::cout << "--inc: " << --inc << std::endl;
	std::cout << "inc--: " << inc-- << std::endl;
	std::cout << "inc after inc--: " << inc << std::endl;

	std::cout << "\n--- Min / Max ---" << std::endl;
	Fixed f1(5.25f);
	Fixed f2(5.5f);

	std::cout << "min(f1, f2): " << Fixed::min(f1, f2) << std::endl;
	std::cout << "max(f1, f2): " << Fixed::max(f1, f2) << std::endl;


	return 0;
} */
