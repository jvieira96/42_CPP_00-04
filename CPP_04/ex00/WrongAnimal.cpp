/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:59:19 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/13 17:09:42 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout	<< GREEN
				<< "WrongAnimal created"
				<< RESET
				<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	*this = copy;
	std::cout	<< GREEN
				<< "WrongAnimal copy constructor called"
				<< RESET
				<< std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
	if (this != &src)
		this->_type = src._type;
	std::cout	<< GREEN
				<< "WrongAnimal assign operator called"
				<< RESET
				<< std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout	<< RED
				<< "WrongAnimal destroyed"
				<< RESET
				<< std::endl;
}

std::string WrongAnimal::getType() const {
	return _type;
}

void WrongAnimal::makesound() const {
	std::cout	<< YELLOW
				<< "Wrong no sound"
				<< RESET
				<< std::endl;
}