/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:39:57 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/07 17:03:57 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:56:46 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/02 15:04:14 by jpedro-f         ###   ########.fr       */
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
				<< "ScavTrap named "
				<< name
				<< " created."
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
				<< "ScavTrap named "
				<< getName() 
				<< " was destroyed."
				<< RESET
				<< std::endl;	
}

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
					<< "ERROR: ScavTrap " 
					<< getName() 
					<< " can't attack, no health left!"
					<< RESET
					<< std::endl;
	}
	else if (getEnergy_points() <= 0) {
		std::cout	<< RED
					<< "ERROR: ScavTrap" 
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
