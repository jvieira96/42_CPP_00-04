/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:50:40 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/01 12:51:01 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Inc.hpp"

class HumanB {

public:

	HumanB(std::string name);
	~HumanB();
	void attack(void) const;
	void setWeapon(Weapon& weapon);

private:

	std::string _name;
	Weapon*	_weapon; // we use pointer because it can be null
};

#endif