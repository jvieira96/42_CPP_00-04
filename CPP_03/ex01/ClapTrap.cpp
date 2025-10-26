/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaovieira <joaovieira@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:56:46 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/08 15:18:47 by joaovieira       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/***************************************************************************/
/* ---------------------------- Constructors ----------------------------- */
/***************************************************************************/

ClapTrap::ClapTrap() 
	: _name("Nameless"), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout	<< GREEN
				<< "A Nameless ClapTrap was created." 
				<< RESET
				<< std::endl;
}

ClapTrap::ClapTrap(std::string name) 
	: _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout	<< GREEN
				<< "A ClapTrap named " 
				<< _name 
				<< " created."
				<< RESET
				<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
		std::cout	<< CYAN
					<< "ClapTrap "
					<< copy.getName()
					<< " copied and a new ClapTrap was created"
					<< RESET
					<< std::endl;
	*this = copy;
}

/***************************************************************************/
/* ---------------------------- Operators -------------------------------- */
/***************************************************************************/

ClapTrap &ClapTrap::operator =(const ClapTrap &src) {
	if (this != &src) {
		std::cout	<< CYAN
					<< "ClapTrap "
					<< src.getName()
					<< " copied into existing ClapTrap"
					<< RESET
					<< std::endl;
		this->_name = src._name;
		this->_hit_points = src._hit_points;
		this->_energy_points = src._energy_points;
		this->_attack_damage = src._attack_damage;
	}
	return *this;
}

/***************************************************************************/
/* ---------------------------- Destructor ------------------------------- */
/***************************************************************************/

ClapTrap::~ClapTrap() {
	std::cout	<< RED
				<< "ClapTrap named "
				<< _name 
				<< " was destroyed."
				<< RESET
				<< std::endl;	
}

/***************************************************************************/
/* ---------------------------- Getters ---------------------------------- */
/***************************************************************************/

std::string ClapTrap::getName() const {
	return this->_name;
}

int ClapTrap::getHit_points() const {
	return this->_hit_points;
}

int ClapTrap::getEnergy_points() const {
	return this->_energy_points;
}

int ClapTrap::getAttack_damage() const {
	return this->_attack_damage;
}

/***************************************************************************/
/* ---------------------------- Setters ---------------------------------- */
/***************************************************************************/

void ClapTrap::setName(std::string name) {
	this->_name = name;
}

void ClapTrap::setHit_points(int val) {
	this->_hit_points = val;
}

void ClapTrap::setEnergy_points(int val) {
	this->_energy_points = val;
}

void ClapTrap::setAttack_damage(int val) {
	this->_attack_damage = val;
}

/***************************************************************************/
/* ---------------------------- Actions ---------------------------------- */
/***************************************************************************/

void ClapTrap::attack(const std::string& target) {
	if (_hit_points > 0 && _energy_points > 0) {
		_energy_points--;
		std::cout	<< MAGENTA
					<< "ClapTrap "
					<< getName() 
					<< " attacked " 
					<< target 
					<< " causing " 
					<< getAttack_damage()
					<< " points of damage. "
					<< getName()
					<< " lost 1 energy point."
					<< RESET
					<< std::endl;
	}
	else if (_hit_points <= 0) {
		std::cout	<< RED
					<< "ERROR: ClapTrap" 
					<< _name 
					<< " can't attack, no health left!"
					<< RESET
					<< std::endl;
	}
	else if (_energy_points <= 0) {
		std::cout	<< RED
					<< "ERROR: ClapTrap" 
					<< _name 
					<< " can't attack, no energy left!"
					<< RESET
					<< std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if ((int)amount < 0) {
		std::cout	<< RED 
					<< "ERROR: cant take damage, invalid amount!"
					<< RESET
					<< std::endl;
		return;
	}
	if (_hit_points > 0) {
		_hit_points = _hit_points - amount; 
		if (_hit_points > 0) {
			std::cout	<< YELLOW 
					  	<< _name 
						<< " took " 
						<< amount 
				      	<< " damage and now has " 
						<< _hit_points 
						<< " health."
						<< RESET
						<< std::endl;
		}
		else {
			std::cout	<< RED
						<< _name << " took " 
						<< amount 
						<< " damage and has no health left !" 
						<< RESET
						<< std::endl;
		}
	}
	else {
		std::cout	<< RED
					<< "ERROR: " 
					<< _name 
					<< " cant take damage, no health!" 
					<< RESET
					<< std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if ((int)amount < 0) {
		std::cout	<< RED 
					<< "ERROR: cant be repaired, invalid amount!"
					<< RESET
					<< std::endl;
		return;
	}
	if (_hit_points > 0 && _energy_points > 0) {
		_energy_points--;
		_hit_points = _hit_points + amount;
		std::cout	<< GREEN
					<< _name 
					<< " have recieved a repair of " 
					<< amount
					<< " and now has " 
					<< _hit_points 
					<< " points of health. "
					<< _name 
					<< " lost 1 energy point."
					<< RESET
					<< std::endl;
	}
	else if (_hit_points <= 0) {
		std::cout	<< RED
					<< "ERROR: " 
					<< _name 
					<< " can't be repaired, no health left!"
					<< RESET
					<< std::endl;
	}
	else if (_energy_points <= 0) {
		std::cout	<< RED
					<< "ERROR: " 
					<< _name 
					<< " can't be repaired, no energy left!"
					<< RESET
					<< std::endl;
	}
}
