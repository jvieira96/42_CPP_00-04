/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:59:56 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/16 12:51:20 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria() : _type("") {
	std::cout	<< GREEN
				<< "Materia constructor called"
				<< RESET
				<< std::endl;
}

AMateria::AMateria(std::string const &type) :  _type(type) {
	std::cout	<< GREEN
				<< "Materia constructor called"
				<< RESET
				<< std::endl;
}

AMateria::AMateria(AMateria const &copy) {
	*this = copy;
	std::cout	<< GREEN
				<< "Materia copy constructor called"
				<< RESET
				<< std::endl;	
}

AMateria& AMateria::operator=(AMateria const &src) {
	(void)src;
	std::cout	<< GREEN
				<< "Materia assignment operator called"
				<< RESET
				<< std::endl;	
	return *this;
}

AMateria::~AMateria() {
	std::cout	<< RED
				<< "Materia destructor called"
				<< RESET
				<< std::endl;
}

std::string const& AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter& target) {
	std::cout	<< MAGENTA
				<< "* Nothing happends to "
				<< target.getName()
				<< " *"
				<< RESET
				<< std::endl;
}