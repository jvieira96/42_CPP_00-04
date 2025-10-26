/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:04:08 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/16 12:22:34 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter { 

private:

	std::string _name;
	AMateria *_inventory[4];
	AMateria *_floor[100];
	int	_dropcount;

public:

	Character();
	Character(std::string const &name);
	Character(Character const &copy);
	Character& operator=(Character const &src);
	~Character();

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	std::string const & getName() const;
	
};

#endif