/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:50:23 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/05 20:36:03 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _fixednbr(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator = (const Fixed &src) {
	// std::cout << "Copy assignmet operator called" << std::endl;
	if (this != &src)
		this->_fixednbr = src.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_fixednbr;
}

void Fixed::setRawBits(int const raw) {
	this->_fixednbr = raw;
}

Fixed::Fixed(const int int_nbr) : _fixednbr(int_nbr * (1 << _fracbits)) {
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float float_nbr) : _fixednbr(roundf(float_nbr * (1 << _fracbits))) {
	// std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const {
	return (static_cast<float>(_fixednbr) / (1 << _fracbits));
}

int Fixed::toInt(void) const {
	return (_fixednbr / (1 << _fracbits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}

bool Fixed::operator > (const Fixed &other) const {
	return this->_fixednbr > other.getRawBits();
}

bool Fixed::operator < (const Fixed &other) const {
	return this->_fixednbr < other.getRawBits();
}

bool Fixed::operator >= (const Fixed &other) const {
	return this->_fixednbr >= other.getRawBits();
}

bool Fixed::operator <= (const Fixed &other) const {
	return this->_fixednbr <= other.getRawBits();
}

bool Fixed::operator == (const Fixed &other) const {
	return this->_fixednbr == other.getRawBits();
}

bool Fixed::operator != (const Fixed &other) const {
	return this->_fixednbr != other.getRawBits();
}

Fixed Fixed::operator + (const Fixed &other) {
	Fixed result;

	result.setRawBits(this->getRawBits() + other.getRawBits());
	return result;
}

Fixed Fixed::operator - (const Fixed &other) {
	Fixed result;

	result.setRawBits(this->getRawBits() - other.getRawBits());
	return result;
}

Fixed Fixed::operator * (const Fixed &other) {
	Fixed result;

	result.setRawBits((this->getRawBits() * other.getRawBits()) >> this->_fracbits);
	return result;
}

Fixed Fixed::operator / (const Fixed &other) {
	Fixed result;

	result.setRawBits((this->getRawBits() << _fracbits) / other.getRawBits());
	return result;
}

Fixed& Fixed::operator++() {
    this->_fixednbr++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    this->_fixednbr++;
    return temp;
}

Fixed& Fixed::operator--() {
    this->_fixednbr--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    this->_fixednbr--;
    return temp;
}

Fixed &Fixed::min(Fixed &n1, Fixed &n2) {
	if (n1 < n2)
		return  n1;
	return n2;
}

const Fixed& Fixed::min(const Fixed &n1, const Fixed &n2) {
	if (n1 < n2)
		return n1;
	return n2;
}

Fixed &Fixed::max(Fixed &n1, Fixed &n2) {
	if (n1 > n2)
		return  n1;
	return n2;
}

const Fixed& Fixed::max(const Fixed &n1, const Fixed &n2) {
	if (n1 > n2)
		return n1;
	return n2;
}
