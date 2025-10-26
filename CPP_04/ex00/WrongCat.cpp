/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:26:40 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/10 15:54:36 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	_type = "WrongCat";
	std::cout	<< GREEN
				<< "WrongCat created"
				<< RESET
				<< std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal() {
	_type = copy._type;
	std::cout	<< GREEN
				<< "WrongCat copy constructor called"
				<< RESET
				<< std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
	if (this != &src)
		_type = src._type;
	std::cout	<< GREEN
				<< "WrongCat assign operator called"
				<< RESET
				<< std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout	<< RED
				<< "WrongCat was detroyed"
				<< RESET
				<< std::endl;
}

void WrongCat::makesound() const {
	std::cout	<< YELLOW
				<< "Wrong cat sound!!!"
				<< RESET
				<< std::endl;
}																