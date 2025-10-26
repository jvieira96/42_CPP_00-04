/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaovieira <joaovieira@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:26:37 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/08 15:01:35 by joaovieira       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

/***************************************************************************/
/* ---------------------------- Constructors ----------------------------- */
/***************************************************************************/

FragTrap::FragTrap() : ClapTrap() {
	setName("Nameless");
	setHit_points(100);
	setEnergy_points(100);
	setAttack_damage(30);
	std::cout	<< BLUE
				<< "Nameless FragTrap created."
				<< RESET
				<< std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

	setHit_points(100);
	setEnergy_points(100);
	setAttack_damage(30);
	std::cout	<< BLUE
				<< "FragTrap created."
				<< RESET
				<< std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap (src) {
	std::cout	<< CYAN
				<< "FragTrap "
				<< getName()
				<< " was copied and a new FragTrap was created."
				<< RESET
				<< std::endl;
}

/***************************************************************************/
/* ---------------------------- Operators -------------------------------- */
/***************************************************************************/

FragTrap &FragTrap::operator =(const FragTrap &src) {
	if (this != &src)
		ClapTrap::operator=(src);
	std::cout	<< CYAN
				<< "FragTrap "
				<< getName()
				<< " was copied into existing FragTrap."
				<< RESET
				<< std::endl;
	return *this;
}

/***************************************************************************/
/* ---------------------------- Destructor ------------------------------- */
/***************************************************************************/

FragTrap::~FragTrap() {
	std::cout	<< RED
				<< "FragTrap was destroyed."
				<< RESET
				<< std::endl;	
}

/***************************************************************************/
/* ---------------------------- Getters   -------------------------------- */
/***************************************************************************/

int FragTrap::default_hit() const {
	return 100;
};

int FragTrap::default_energy() const {
	return 100;
};

int FragTrap::default_attack() const {
	return 30;
};

/***************************************************************************/
/* ---------------------------- Actions ---------------------------------- */
/***************************************************************************/

void FragTrap::highFivesGuys(void) {
	std::cout 	<< GREEN
				<< "FragTrap named "
				<< getName()
				<< " asked for a high-five!!!";
}
