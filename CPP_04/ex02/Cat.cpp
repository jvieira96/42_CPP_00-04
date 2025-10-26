/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:26:40 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/13 17:04:46 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal() {
	_brain = new Brain();
	_type = "Cat";
	std::cout	<< GREEN
				<< "Cat created"
				<< RESET
				<< std::endl;
}

Cat::Cat(const Cat &copy) : AAnimal() {
	_brain = new Brain(*copy._brain);
	_type = copy._type;
	std::cout	<< GREEN
				<< "Cat copy constructor called"
				<< RESET
				<< std::endl;
}

Cat &Cat::operator=(const Cat &src) {
	if (this != &src) {
		delete _brain;
		_brain = new Brain(*src._brain);
		_type = src._type;
	}
	std::cout	<< GREEN
				<< "Cat assign operator called"
				<< RESET
				<< std::endl;
	return *this;
}

Cat::~Cat() {
	delete _brain;
	std::cout	<< RED
				<< "Cat was detroyed"
				<< RESET
				<< std::endl;
}

void Cat::makesound() const {
	std::cout	<< YELLOW
				<< "MEOW MEOW MEOW!!!"
				<< RESET
				<< std::endl;
}

Brain *Cat::get_Brain() const {
	return _brain;
}