/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:48:47 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/16 12:37:42 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

public: 

	Cure();
	Cure(Cure const &copy);
	Cure& operator=(Cure const &src);
	~Cure();
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif