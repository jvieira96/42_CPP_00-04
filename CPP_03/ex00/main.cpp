/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:30:00 by joaovieira        #+#    #+#             */
/*   Updated: 2025/10/02 15:05:57 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void) {


	std::cout	<< "\n"
				<< BLUE
				<< "---------- Creating ClapTrap with name parameter ----------"
				<< RESET
				<< std::endl;
	ClapTrap Clap1("Clap1");
	ClapTrap Clap2("Clap2");


	std::cout	<< "\n"
				<< BLUE
				<< "---------- Creating ClapTrap without name parameter ----------"
				<< RESET
				<< std::endl;
	ClapTrap Clap3;


	std::cout	<< "\n"
				<< BLUE
				<< "---------- Attacking ----------"
				<< RESET
				<< std::endl;
	Clap1.attack("Clap2");


	std::cout	<< "\n"
				<< BLUE
				<< "---------- Reparing ----------"
				<< RESET
				<< std::endl;
	Clap1.beRepaired(-1);
	Clap1.beRepaired(1);


	std::cout	<< "\n"
				<< BLUE
				<< "----------  Taking damage ----------"
				<< RESET
				<< std::endl;
	Clap1.takeDamage(-1);
	Clap1.takeDamage(10);
	Clap1.takeDamage(1);


	std::cout	<< "\n"
				<< BLUE
				<< "----------  Attacking, Reparing and taking damage without health left ----------"
				<< RESET
				<< std::endl;
	Clap1.attack("Clap2");
	Clap1.beRepaired(1);
	Clap1.takeDamage(1);


	std::cout	<< "\n"
			<< BLUE
			<< "----------  Attacking and Reparing without energy left ----------"
			<< RESET
			<< std::endl;
	for (int i = 0; i < 10; i++) {
		Clap2.beRepaired(1);
	}
	Clap2.attack("Nameless");
	Clap2.beRepaired(1);

	std::cout	<< "\n"
				<< BLUE
				<< "---------- Destroying objects ----------"
				<< RESET
				<< std::endl;
	return 0;
}