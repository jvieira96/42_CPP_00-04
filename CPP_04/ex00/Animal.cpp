/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:59:19 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/13 17:09:32 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout	<< GREEN
				<< "Animal created"
				<< RESET
				<< std::endl;
}

Animal::Animal(const Animal &copy) {
	*this = copy;
	std::cout	<< GREEN
				<< "Animal copy constructor called"
				<< RESET
				<< std::endl;
}

Animal &Animal::operator=(const Animal &src) {
	if (this != &src)
		this->_type = src._type;
	std::cout	<< GREEN
				<< "Animal assign operator called"
				<< RESET
				<< std::endl;
	return *this;
}

Animal::~Animal() {
	std::cout	<< RED
				<< "Animal destroyed"
				<< RESET
				<< std::endl;
}

std::string Animal::getType() const {
	return _type;
}

void Animal::makesound() const {
	std::cout	<< YELLOW
				<< "no sound"
				<< RESET
				<< std::endl;
}