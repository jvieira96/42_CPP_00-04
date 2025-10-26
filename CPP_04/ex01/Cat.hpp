/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:12:43 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/13 16:21:25 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

private:

	Brain *_brain;

public:
	Cat();
	Cat(const Cat &copy);
	Cat &operator=(const Cat &src);
	~Cat();

	void makesound() const;
	Brain *get_Brain() const;
};


#endif	