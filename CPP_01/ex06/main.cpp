/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 16:42:10 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/04 12:45:32 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Print(Harl& harl, std::string level) {
	std::cout << "[  " << level << " ]" << std::endl;
	harl.complain(level);
	std::cout << std::endl;
}

int main(int ac, char *av[]) {

	if (ac != 2) {
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}
	
	Harl harl;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	lvl = -1;

	for (int i = 0; i < 4; i++) {
		if (av[1] == levels[i]) {
			lvl = i;
			break;
		}
	}

	switch (lvl)
	{
	default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	case 0:
		Print(harl, levels[0]);
	case 1:
		Print(harl, levels[1]);
	case 2:
		Print(harl, levels[2]);
	case 3:
		Print(harl, levels[3]);
		break;
	}
	return 0;
}