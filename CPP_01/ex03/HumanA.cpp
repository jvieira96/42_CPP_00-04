/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:30:43 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/04 14:02:24 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
	: _name(name), _weapon(weapon) {
	std::cout << GREEN << "HumanA named " << _name << " was created with weapon "
	          << YELLOW << _weapon.getTYpe() << RESET << std::endl;
}

HumanA::~HumanA() {
	std::cout << RED << "HumanA named "<< _name << " with weapon "
			  << YELLOW << _weapon.getTYpe() << RED << " was destroyed" << RESET << std::endl;
}

void HumanA::attack() const {
	std::cout << BLUE << _name << " attacks with weapon " 
	          << YELLOW << _weapon.getTYpe() << RESET << std::endl;
}
