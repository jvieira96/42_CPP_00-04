/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:59:19 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/13 17:03:43 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout	<< GREEN
				<< "Animal created"
				<< RESET
				<< std::endl;
}

AAnimal::AAnimal(const AAnimal &copy) {
	*this = copy;
	std::cout	<< GREEN
				<< "Animal copy constructor called"
				<< RESET
				<< std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &src) {
	if (this != &src)
		this->_type = src._type;
	std::cout	<< GREEN
				<< "Animal assign operator called"
				<< RESET
				<< std::endl;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout	<< RED
				<< "Animal destroyed"
				<< RESET
				<< std::endl;
}

std::string AAnimal::getType() const {
	return _type;
}
