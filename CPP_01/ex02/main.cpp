/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:39:54 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/07/31 16:56:21 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (){
	
	std::string str = "HI THIS IS BRAIN";
	std::string* ptr = &str;
	std::string& ref = str;

	std::cout << "Adress string: " << &str << std::endl;
	std::cout << "Adress pointer: " << ptr << std::endl;		
	std::cout << "Adress reference: " << &ref << std::endl;

	std::cout <<  "Value string: " << str << std::endl;
	std::cout <<  "Value pointer: " << *ptr << std::endl;
	std::cout <<  "Value reference: " << ref << std::endl;

	return 0;
}