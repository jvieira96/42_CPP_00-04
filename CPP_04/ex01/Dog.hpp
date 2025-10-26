/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:11:37 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/13 16:21:45 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

private:

	Brain *_brain;

public:
	Dog();
	Dog(const Dog &copy);
	Dog &operator=(const Dog &src);
	~Dog();

	void makesound() const;
	Brain *get_Brain() const;
	
};

#endif