/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:41:19 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/07 18:14:37 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/***************************************************************************/
/* ---------------------------- Constructors ----------------------------- */
/***************************************************************************/

DiamondTrap::DiamondTrap() 
	: ClapTrap("NamelessDiamondTrap_Clap_name"), ScavTrap(), FragTrap() {
	_name = "Nameless";
	setHit_points(FragTrap::default_hit());
	setEnergy_points(ScavTrap::default_energy());
	setAttack_damage(FragTrap::default_attack());
	std::cout	<< BLUE
				<< "Nameless DiamondTrap created."
				<< RESET
				<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_Clap_name"), ScavTrap(name), FragTrap(name) {
	_name = name;
	setHit_points(FragTrap::default_hit());
	setEnergy_points(ScavTrap::default_energy());
	setAttack_damage(FragTrap::default_attack());
	std::cout	<< BLUE
				<< "DiamondTrap named "
				<< name
				<< " created."
				<< RESET
				<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) 
	: ClapTrap(src), ScavTrap(src), FragTrap(src) {
	this->_name = src._name;
	std::cout	<< CYAN
				<< "DiamondTrap "
				<< getName()
				<< " was copied and a new DiamondTrap was created."
				<< RESET
				<< std::endl;
}

/***************************************************************************/
/* ---------------------------- Operators -------------------------------- */
/***************************************************************************/

DiamondTrap &DiamondTrap::operator =(const DiamondTrap &src) {
	if (this != &src) {
		ClapTrap::operator=(src);
		this->_name = src._name;
	}
	std::cout	<< CYAN
				<< "DiamondTrap "
				<< getName()
				<< " was copied into existing DiamondTrap."
				<< RESET
				<< std::endl;
	return *this;
}

/***************************************************************************/
/* ---------------------------- Destructor ------------------------------- */
/***************************************************************************/

DiamondTrap::~DiamondTrap() {
	std::cout	<< RED
				<< "Diamond named "
				<< _name 
				<< " was destroyed."
				<< RESET
				<< std::endl;	
}

/***************************************************************************/
/* ---------------------------- Actions ---------------------------------- */
/***************************************************************************/

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
	std::cout 	<< GREEN
				<< "I'm  a DiamondTrap named "
				<< _name
				<< " and my base name is "
				<< ClapTrap::getName()
				<< RESET
				<< std::endl;
}