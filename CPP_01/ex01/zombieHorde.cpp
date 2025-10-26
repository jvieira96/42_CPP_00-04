/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:32:17 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/07/31 16:19:48 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){

	Zombie* h_zombie = new Zombie[N];

	for (int i = 0; i < N; i++){
		h_zombie[i].set_name(name);
	}
	return h_zombie;
}