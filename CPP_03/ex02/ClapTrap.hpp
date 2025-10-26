/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaovieira <joaovieira@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:41:04 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/08 14:25:00 by joaovieira       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

class ClapTrap {

protected:
    /* ------------------------------- Members ------------------------------- */
	std::string _name;
	int _hit_points;
	int _energy_points;
	int _attack_damage;

	/* ----------------------------- Setters --------------------------------- */
	void setName(std::string);
	void setHit_points(int val);
	void setEnergy_points(int val);
	void setAttack_damage(int val);

public:

	/* ---------------------------- Constructors ----------------------------- */
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);

	/* ---------------------------- Operators -------------------------------- */
	ClapTrap& operator =(const ClapTrap &src);

	/* ---------------------------- Destructor ------------------------------- */
	~ClapTrap();	

	/* ----------------------------- Getters --------------------------------- */
	std::string getName() const;
	int getHit_points() const;
	int getEnergy_points() const;
	int getAttack_damage() const;

	/* ---------------------------- Actions ---------------------------------- */
	void attack(const std::string &target);
	void takeDamage(unsigned int amout);
	void beRepaired(unsigned int amout);
};

#endif