/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:10:15 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/13 15:24:12 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	_type = "Dog";
	std::cout	<< GREEN
				<< "Dog created"
				<< RESET
				<< std::endl;
}

Dog::Dog(const Dog &copy) : Animal() {
	_type = copy._type;
	std::cout	<< GREEN
				<< "Dog copy constructor called"
				<< RESET
				<< std::endl;
}

Dog &Dog::operator=(const Dog &src) {
	if (this != &src)
		_type = src._type;
	std::cout	<< GREEN
				<< "Dog assign operator called"
				<< RESET
				<< std::endl;
	return *this;
}

Dog::~Dog() {
	std::cout	<< RED
				<< "Dog was detroyed"
				<< RESET
				<< std::endl;
}

void Dog::makesound() const {
	std::cout	<< YELLOW
				<< "WOOF WOOF WOOF!!!"
				<< RESET
				<< std::endl;
}