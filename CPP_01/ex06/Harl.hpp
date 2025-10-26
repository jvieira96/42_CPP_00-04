/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 16:42:37 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/04 12:06:22 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {

private:

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:

	Harl();
	~Harl();
	void complain(std::string level);

};

#endif