/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:10:15 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/13 17:04:56 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal() {
	_brain = new Brain();
	_type = "Dog";
	std::cout	<< GREEN
				<< "Dog created"
				<< RESET
				<< std::endl;
}

Dog::Dog(const Dog &copy) : AAnimal() {
	_brain = new Brain(*copy._brain);
	_type = copy._type;
	std::cout	<< GREEN
				<< "Dog copy constructor called"
				<< RESET
				<< std::endl;
}

Dog &Dog::operator=(const Dog &src) {
	if (this != &src) {
		delete _brain;
		_brain = new Brain(*src._brain);
		_type = src._type;
	}
	std::cout	<< GREEN
				<< "Dog assign operator called"
				<< RESET
				<< std::endl;
	return *this;
}

Dog::~Dog() {
	delete _brain;
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

Brain *Dog::get_Brain() const {
	return _brain;
}