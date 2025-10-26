/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:53:01 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/04 14:02:35 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
	std::cout << GREEN << "HumanB named "<< _name 
		      << " was created unarmed" << RESET << std::endl;
}

HumanB::~HumanB() {
	if (_weapon == NULL){
		std::cout << RED << "HumanB named "<< _name << "unarmed was destroyed" 
				  << RESET << std::endl;
	}
	else {
		std::cout << RED << "HumanB named "<< _name << " with weapon "
			      << YELLOW << _weapon->getTYpe() << RED << " was destroyed" << RESET	<< std::endl;
	}
}

void HumanB::attack() const{
	
	if (_weapon == NULL){
			std::cout << BLUE << "HumanB named "<< _name
			          << " is unarmed" << RESET << std::endl;
	}
	else{
		std::cout << BLUE << "HumanB named " << _name 
		          << " attacks with weapon " << YELLOW << _weapon->getTYpe() << RESET << std::endl;
	}

}

void HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}