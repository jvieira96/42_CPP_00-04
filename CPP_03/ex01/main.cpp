/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:30:00 by joaovieira        #+#    #+#             */
/*   Updated: 2025/10/07 14:22:14 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void) {


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
				<< "---------- Attacking  with  ScavTrap----------"
				<< RESET
				<< std::endl;
	Scav1.attack("Someone");

	std::cout	<< "\n"
				<< BLUE
				<< "---------- Attacking  with  ClapTrap----------"
				<< RESET
				<< std::endl;
	Clap1.attack("Someone");

	std::cout	<< "\n"
				<< BLUE
				<< "---------- Activating Gate Keeper Mode ----------"
				<< RESET
				<< std::endl;
	Scav1.guardGate();

	std::cout	<< "\n"
				<< BLUE
				<< "---------- Destroying objects ----------"
				<< RESET
				<< std::endl;
	return 0;
}
