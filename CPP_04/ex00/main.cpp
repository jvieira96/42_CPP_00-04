/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:12:22 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/10/13 15:23:46 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void subject_main() {

	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makesound();
	j->makesound();
	meta->makesound();

	delete meta;
	delete j;
	delete i;

}

int main() {

	// subject_main();

	std::cout	<< BLUE
				<< "\n---------- Animal -----------"
				<< RESET
				<< std::endl;
	const Animal *meta = new Animal();
	std::cout	<< MAGENTA
				<< "type: "
				<< meta->getType()
				<< std::endl;
	std::cout	<< MAGENTA
				<< "Sound: ";
	meta->makesound();
	std::cout	<< MAGENTA
				<< "Deleting... "
				<< std::endl;
	delete meta;


	std::cout	<< BLUE
				<< "\n---------- Dog -----------"
				<< RESET
				<< std::endl;
	const Animal *j = new Dog();
	std::cout	<< MAGENTA
				<< "type: "
				<< YELLOW
				<< j->getType()
				<< std::endl;
	std::cout	<< MAGENTA
				<< "Sound: ";
	j->makesound();
	std::cout	<< MAGENTA
				<< "Deleting... "
				<< std::endl;
	delete j;

	std::cout	<< BLUE
				<< "\n---------- Cat -----------"
				<< RESET
				<< std::endl;
	const Animal *i = new Cat();
	std::cout	<< MAGENTA
				<< "type: "
				<< YELLOW
				<< i->getType()
				<< std::endl;
	std::cout	<< MAGENTA
				<< "Sound: ";
	i->makesound();
	std::cout	<< MAGENTA
				<< "Deleting... "
				<< std::endl;
	delete i;

	std::cout	<< BLUE
				<< "\n\n\n---------- Wrong Animal -----------"
				<< RESET
				<< std::endl;
	const WrongAnimal *k = new WrongAnimal();
	std::cout	<< MAGENTA
				<< "type: "
				<< YELLOW
				<< k->getType()
				<< std::endl;
	std::cout	<< MAGENTA
				<< "Sound: ";
	k->makesound();
	std::cout	<< MAGENTA
				<< "Deleting... "
				<< std::endl;
	delete i;

	std::cout	<< BLUE
				<< "\n---------- Wrong Cat -----------"
				<< RESET
				<< std::endl;
	const WrongAnimal *l = new WrongCat();
	std::cout	<< MAGENTA
				<< "type: "
				<< YELLOW
				<< l->getType()
				<< std::endl;
	std::cout	<< MAGENTA
				<< "Sound: ";
	l->makesound();
	std::cout	<< MAGENTA
				<< "Deleting... "
				<< std::endl;
	delete i;

	return 0; 
}