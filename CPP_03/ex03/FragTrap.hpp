/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:26:46 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/07 18:12:09 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	/* ---------------------------- Getters -------------------------------- */
protected:
	int default_hit() const;
	int default_energy() const;
	int default_attack() const;

public:
	/* ---------------------------- Constructors ----------------------------- */
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &src);
	/* ---------------------------- Operators -------------------------------- */
	FragTrap& operator =(const FragTrap &src);
	/* ---------------------------- Destructor ------------------------------- */
	~FragTrap();
	/* ---------------------------- Actions ---------------------------------- */
	void highFivesGuys(void);
};

#endif