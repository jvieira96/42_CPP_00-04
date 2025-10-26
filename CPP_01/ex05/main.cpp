/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 16:42:10 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/01 18:25:56 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[]) {

	if (ac != 2) {
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}
	Harl harl;

	harl.complain(av[1]);

	return 0;
}