/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:59:03 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/07/31 16:16:43 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{

public:

	Zombie();
	~Zombie();
	void set_name(std::string name);
	void announce(void);

private:

	std::string _name;

};

Zombie* zombieHorde(int N, std::string name);

#endif
