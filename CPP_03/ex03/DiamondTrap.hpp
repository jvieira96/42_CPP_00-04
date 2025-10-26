/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:31:10 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/07 17:00:53 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

private:
	std::string _name;

public:
	/* ---------------------------- Constructors ----------------------------- */
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &src);
	/* ---------------------------- Operators -------------------------------- */
	DiamondTrap& operator =(const DiamondTrap &src);
	/* ---------------------------- Destructor ------------------------------- */
	~DiamondTrap();
	/* ---------------------------- Actions ---------------------------------- */
	void attack(const std::string &target);
	void whoAmI();
};

#endif