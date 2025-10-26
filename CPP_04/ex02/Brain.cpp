/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:43:17 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/13 17:06:13 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "";
	std::cout << GREEN
			  << "Brain constructor called."
			  << RESET
			  << std::endl;
}

Brain::Brain(const Brain &copy) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
	std::cout << GREEN
			  << "Brain copy constructor called."
			  << RESET
			  << std::endl;
}

Brain& Brain::operator=(const Brain &src) {
	if (this != &src)
		for (int i = 0; i < 100; i++);
	std::cout << GREEN
			  << "Brain assignment operator called."
			  << RESET
			  << std::endl;
	return *this;
}

Brain::~Brain() {
	std::cout << RED
			  << "Brain destructor called."
			  << RESET
			  << std::endl;
}

void  Brain::set_idea(std::string idea, int index) {
	if(index < 0 || index > 99) {
		std::cout << "Invalid Index" << std::endl;
		return;
	}
	_ideas[index] = idea;
}

std::string Brain::get_idea(int index) const { 
	if(index < 0 || index > 99) {
		std::cout << "Invalid Index" << std::endl;
		return NULL;
	}
	return _ideas[index];
}