/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:03:47 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/01 12:51:21 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "Inc.hpp"

class Weapon{

public:

	Weapon(std::string type);
	~Weapon();
	const std::string& getTYpe() const;
	void setType(std::string new_value);

private:

	std::string _type;

};

#endif