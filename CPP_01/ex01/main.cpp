/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:13:33 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/07/31 16:37:02 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	int		horde_size = 42;
	Zombie *h_zombie = zombieHorde(horde_size, "Zombie");

	
	for (int i = 0; i < horde_size; i++){
		h_zombie[i].announce();
	}

	delete [] h_zombie;
	return 0;
}
