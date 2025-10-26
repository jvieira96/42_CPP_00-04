/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:41:24 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/16 14:09:06 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character() : _name("Nameless"), _dropcount(0) {
	for (int i = 0; i < 4 ; i++) 
		_inventory[i] = NULL;
	for (int i = 0; i < 100 ; i++) 
		_floor[i] = NULL;
	std::cout	<< GREEN
				<< "Character constructor called"
				<< RESET
				<< std::endl;
}

Character::Character(std::string const &name) : _name(name), _dropcount(0) {
	for (int i = 0; i < 4 ; i++) 
		_inventory[i] = NULL;
	for (int i = 0; i < 100 ; i++) 
		_floor[i] = NULL;
	std::cout	<< GREEN
				<< "Character constructor called"
				<< RESET
				<< std::endl;
}

Character::Character(Character const &copy) : _name(copy._name) {
	for (int i = 0; i < 4; i++) {
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	std::cout	<< GREEN
				<< "Character copy constructor called"
				<< RESET
				<< std::endl;
}

Character& Character::operator=(Character const &src) {
	if (this != &src) {
		_name = src._name;
		for (int i = 0; i < 4; i++) {
			if (_inventory[i])
				delete _inventory[i];
			if (src._inventory[i])
				_inventory[i] = src._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	std::cout	<< GREEN
				<< "Character assignment operator called"
				<< RESET
				<< std::endl;
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		delete _inventory[i];
		_inventory[i] = NULL;
	}

	for (int i = 0; i < _dropcount ; i++) {
		delete _floor[i];
		_floor[i] = NULL;
	}

	std::cout	<< RED
				<< "Character destructor called"
				<< RESET
				<< std::endl;
}

void Character::equip(AMateria* m) {
	if (!m) {
		std::cout 	<< RED
					<< "ERROR: UNKNOWN MATERIA"
					<< RESET
					<< std::endl;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			std::cout	<< YELLOW
						<< _name
						<< " equiped "
						<< m->getType()
						<< " in slot "
						<< i
						<< RESET
						<< std::endl;
			return;
		}
	}
	std::cout	<< RED
				<< "Cant equip, no space on inventory"
				<< RESET
				<< std::endl;
}

void Character::unequip(int idx) {
	if ((idx < 0 || idx > 3) || !_inventory[idx]) {
		std::cout 	<< RED
					<< "ERROR: INVALID OR EMPTY SLOT"
					<< RESET
					<< std::endl;
		return;
	}
	_dropcount++;
	_floor[_dropcount] = _inventory[idx];
	_inventory[idx] = NULL;
	std::cout	<< YELLOW
				<< _name
				<< " unequiped the slot "
				<< idx
				<< RESET
				<< std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if ((idx < 0 || idx > 3) || !_inventory[idx]) {
		std::cout 	<< RED
					<< "ERROR: INVALID OR EMPTY SLOT"
					<< RESET
					<< std::endl;
		return;
	}
	_inventory[idx]->use(target);
	std::cout	<< YELLOW
				<< _name
				<< " used "
				<< _inventory[idx]->getType()
				<< " against "
				<< target.getName()
				<< RESET
				<< std::endl;
}

std::string const& Character::getName() const { 
	return _name;
}