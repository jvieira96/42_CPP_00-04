/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:16:23 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/01 12:36:13 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc.hpp"

Weapon::Weapon (std::string type) : _type(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getTYpe() const {
	return (_type);
}

void Weapon::setType(std::string new_value){
	_type = new_value;
}
