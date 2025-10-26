/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:24:22 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/01 12:50:32 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Inc.hpp"

class HumanA {

public:

	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack(void) const;

private:

	std::string _name;
	Weapon&	_weapon; // cant be null cant be changed
};

#endif