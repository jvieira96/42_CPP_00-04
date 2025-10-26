/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:26:37 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/07 14:58:51 by jpedro-f         ###   ########.fr       */
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
				<< "FragTrap named "
				<< name
				<< " created."
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
				<< "FragTrap named "
				<< getName() 
				<< " was destroyed."
				<< RESET
				<< std::endl;	
}

/***************************************************************************/
/* ---------------------------- Actions ---------------------------------- */
/***************************************************************************/

void FragTrap::highFivesGuys(void) {
	std::cout 	<< GREEN
				<< "FragTrap named "
				<< getName()
				<< " asked for a high-five!!!";
}
