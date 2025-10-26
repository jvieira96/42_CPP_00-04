/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:25:09 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/16 12:40:56 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

public: 

	Ice();
	Ice(Ice const &copy);
	Ice& operator=(Ice const &src);
	~Ice();
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif