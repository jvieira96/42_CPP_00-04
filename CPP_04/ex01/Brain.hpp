/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:33:03 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/13 16:28:54 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {

private: 

	std::string _ideas[100];

public:

	Brain();
	Brain(const Brain &copy);
	Brain &operator =(const Brain &src);
	~Brain();
	void set_idea(std::string idea, int index);
	std::string get_idea(int index) const;

};

#endif