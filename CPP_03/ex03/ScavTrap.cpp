/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaovieira <joaovieira@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:39:57 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/08 15:00:23 by joaovieira       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/***************************************************************************/
/* ---------------------------- Constructors ----------------------------- */
/***************************************************************************/

ScavTrap::ScavTrap() : ClapTrap() {
	setName("Nameless");
	setHit_points(100);
	setEnergy_points(50);
	setAttack_damage(20);
	std::cout	<< BLUE
				<< "Nameless ScavTrap created."
				<<  RESET
				<< std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	setHit_points(100);
	setEnergy_points(50);
	setAttack_damage(20);
	std::cout	<< BLUE
				<< "ScavTrap created."
				<<  RESET 
				<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
	std::cout	<< CYAN
				<< "ScavTrap "
				<< getName()
				<< " was copied and a new ScavTrap was created."
				<< RESET
				<< std::endl;
}

/***************************************************************************/
/* ---------------------------- Operators -------------------------------- */
/***************************************************************************/

ScavTrap &ScavTrap::operator =(const ScavTrap &src) {
	if (this != &src)
		ClapTrap::operator =(src);
	std::cout	<< CYAN
				<< "ScavTrap "
				<< getName()
				<< " was copied into existing ScavTrap."
				<< RESET
				<< std::endl;
	return *this;
}

/***************************************************************************/
/* ---------------------------- Destructor ------------------------------- */
/***************************************************************************/

ScavTrap::~ScavTrap() {
	std::cout	<< RED
				<< "ScavTrap was destroyed."
				<< RESET
				<< std::endl;	
}

/***************************************************************************/
/* ---------------------------- Getters   -------------------------------- */
/***************************************************************************/

int ScavTrap::default_hit() const {
	return 100;
};

int ScavTrap::default_energy() const {
	return 50;
};

int ScavTrap::default_attack() const {
	return 20;
};

/***************************************************************************/
/* ---------------------------- Actions ---------------------------------- */
/***************************************************************************/

void ScavTrap::attack(const std::string &target) {
	if (getHit_points() > 0 && getEnergy_points() > 0) {
		setEnergy_points(getEnergy_points() - 1);
		std::cout	<< MAGENTA
					<< getName() 
					<< " attacked " 
					<< target 
					<< " causing A TREMENDOUS " 
					<< getAttack_damage()
					<< " points of damage. "
					<< getName()
					<< " lost 1 energy point."
					<< RESET
					<< std::endl;
	}
	else if (getHit_points() <= 0) {
		std::cout	<< RED
					<< "ERROR: " 
					<< getName() 
					<< " can't attack, no health left!"
					<< RESET
					<< std::endl;
	}
	else if (getEnergy_points() <= 0) {
		std::cout	<< RED
					<< "ERROR: " 
					<< getName() 
					<< " can't attack, no energy left!"
					<< RESET
					<< std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout	<< CYAN
				<< "ScavTrap "
				<< getName()
				<< " is now in Gate Keeper Mode!"
				<< RESET
				<< std::endl;
}
