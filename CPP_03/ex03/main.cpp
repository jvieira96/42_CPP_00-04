/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaovieira <joaovieira@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:30:00 by joaovieira        #+#    #+#             */
/*   Updated: 2025/10/08 15:15:18 by joaovieira       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main (void) {

	std::cout	<< "\n"
				<< BLUE
				<< "---------- Creating Diamond Trap----------"
				<< RESET
				<< std::endl;
	DiamondTrap Diamond1("Shiny");
	std::cout	<< MAGENTA
				<< "hit points: "
				<< Diamond1.getHit_points()
				<< "\nenergy points: "
				<< Diamond1.getEnergy_points()
				<< "\nattack damage: "
				<< Diamond1.getAttack_damage()
				<< std::endl;

	std::cout	<< "\n"
				<< BLUE
				<< "---------- Attacking with Diamond using ScavTrap attack function ----------"
				<< RESET
				<< std::endl;
	Diamond1.attack("someone");

	std::cout	<< "\n"
				<< BLUE
				<< "---------- WhoIAm ? ----------"
				<< RESET
				<< std::endl;
	Diamond1.whoAmI();

	std::cout	<< "\n"
				<< BLUE
				<< "---------- Destroying objects ----------"
				<< RESET
				<< std::endl;
	return 0;
}
