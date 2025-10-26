/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaovieira <joaovieira@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:30:00 by joaovieira        #+#    #+#             */
/*   Updated: 2025/10/08 14:28:43 by joaovieira       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void) {

	std::cout	<< "\n"
				<< BLUE
				<< "---------- Creating FragTrap ----------"
				<< RESET
				<< std::endl;
	FragTrap Frag1("Frag1");
	std::cout	<< MAGENTA
				<< "hit points: "
				<< Frag1.getHit_points()
				<< "\nenergy points: "
				<< Frag1.getEnergy_points()
				<< "\nattack damage: "
				<< Frag1.getAttack_damage()
				<< std::endl;

	std::cout	<< "\n"
				<< BLUE
				<< "---------- Creating ScavTrap ----------"
				<< RESET
				<< std::endl;
	ScavTrap Scav1("Scav1");
	std::cout	<< MAGENTA
				<< "hit points: "
				<< Scav1.getHit_points()
				<< "\nenergy points: "
				<< Scav1.getEnergy_points()
				<< "\nattack damage: "
				<< Scav1.getAttack_damage()
				<< std::endl;

	std::cout	<< "\n"
				<< BLUE
				<< "---------- Creating ClapTrap ----------"
				<< RESET
				<< std::endl;
	ClapTrap Clap1("Clap1");
	std::cout	<< MAGENTA
				<< "hit points: "
				<< Clap1.getHit_points()
				<< "\nenergy points: "
				<< Clap1.getEnergy_points()
				<< "\nattack damage: "
				<< Clap1.getAttack_damage()
				<< std::endl;


	std::cout	<< "\n"
				<< BLUE
				<< "---------- Requesting High-Fives ----------"
				<< RESET
				<< std::endl;
	Frag1.highFivesGuys();

	std::cout	<< "\n\n"
				<< BLUE
				<< "---------- Destroying objects ----------"
				<< RESET
				<< std::endl;
	return 0;
}
