/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:12:22 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/13 17:11:03 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void subject_main()
{

	const AAnimal *j = new Dog();
	const AAnimal *i = new Cat();
	delete j;
	delete i;
}

int main()
{

	// subject_main();
	// AAnimal a;
	// AAnimal *animal = new AAnimal();
	AAnimal *animals[4];

	std::cout << BLUE
			  << "\n---------- Creating 4 Animals, Half Dogs, Half Cats -----------"
			  << RESET
			  << std::endl;
	for (int i = 0; i < 4; i++) {
		if (i < 2) {
			std::cout	<< YELLOW
						<< "\nCreating a Dog, animal number "
						<< i
						<< RESET
						<< std::endl;
			animals[i] = new Dog();
		}
		else {
			std::cout	<< YELLOW
						<< "\nCreating a Cat, animal number "
						<< i
						<< RESET
						<< std::endl;
			animals[i] = new Cat();
		}
	}

	for (int i = 0; i < 4; i++) {
		if (i < 2) {
			std::cout	<< YELLOW
						<< "\nDeleting a Dog, animal number "
						<< i
						<< RESET
						<< std::endl;
			delete animals[i];
		}
		else {
			std::cout	<< YELLOW
						<< "\nDeleting a Cat, animal number "
						<< i
						<< RESET
						<< std::endl;
			delete animals[i];
		}
	}

	std::cout << BLUE
			  << "\n---------- Deep copy -----------"
			  << RESET
			  << std::endl; 
	Dog zeus;

	zeus.get_Brain()->set_idea("sit", 0);
	Dog kyara(zeus);
	std::cout << MAGENTA
			  << "\nZeus idea: "
			  << zeus.get_Brain()->get_idea(0)
			  << "\nKyara idea: "
			  << kyara.get_Brain()->get_idea(0)
			  << RESET
			  << std::endl;
	zeus.get_Brain()->set_idea("chase the ball", 0);
	std::cout << MAGENTA
			  << "\nZeus idea: "
			  << zeus.get_Brain()->get_idea(0)
			  << "\nKyara idea: "
			  << kyara.get_Brain()->get_idea(0)
			  << RESET
			  << std::endl;
	return 0;
}