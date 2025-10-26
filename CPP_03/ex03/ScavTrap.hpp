/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:28:41 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/07 18:11:50 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {

	/* ---------------------------- Getters -------------------------------- */
protected:
	int default_hit() const;
	int default_energy() const;
	int default_attack() const;

public:
	/* ---------------------------- Constructors ----------------------------- */
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &src);
	/* ---------------------------- Operators -------------------------------- */
	ScavTrap& operator =(const ScavTrap &src);
	/* ---------------------------- Destructor ------------------------------- */
	~ScavTrap();
	/* ---------------------------- Actions ---------------------------------- */
	void attack(const std::string &target);
	void guardGate();
};

#endif