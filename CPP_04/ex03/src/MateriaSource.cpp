/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:54:59 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/16 13:48:03 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_templates[i] = NULL;
	std::cout	<< GREEN
				<< "MateriaSource constructer called"
				<< RESET
				<< std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy) {
	for (int i = 0; i < 4; i++) {
		if (copy._templates[i])
			_templates[i] = copy._templates[i]->clone();
		else
			_templates[i] = NULL;
	}
	std::cout	<< GREEN
				<< "MateriaSource copy constructer called"
				<< RESET
				<< std::endl;
}

MateriaSource& MateriaSource::operator=(MateriaSource const &src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++) {
			if (_templates[i])
				delete _templates[i];
			if (src._templates[i])
				_templates[i] = src._templates[i];
			else
				_templates[i] = NULL;
		}
	}
	std::cout	<< GREEN
				<< "MateriaSource assignment operator called"
				<< RESET
				<< std::endl;
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		delete _templates[i];
		_templates[i] = NULL;
	}
	std::cout	<< RED
				<< "MateriaSource destroyer called"
				<< RESET
				<< std::endl;
}

void MateriaSource::learnMateria(AMateria *m) {
	if (!m) {
		std::cout 	<< RED
					<< "ERROR: UNKNOWN MATERIA"
					<< RESET
					<< std::endl;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (!_templates[i]) {
			_templates[i] = m;
			std::cout	<< YELLOW
						<< "learned materia of type "
						<< m->getType()
						<< RESET
						<< std::endl;
			return;
		}
	}
	std::cout	<< RED
				<< "Cant learn new materia, no space left"
				<< RESET
				<< std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (_templates[i]->getType() == type)
			return _templates[i]->clone();
	}
	std::cout	<< RED
				<< "cant create new materia, type not found"
				<< 	RESET
				<< std::endl;
	return 0;
}