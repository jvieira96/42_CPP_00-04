/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:09:13 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/08/01 16:36:42 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc.hpp"

int replace_and_write(const std::string file, const std::string s1, const std::string s2)
{
	std::ifstream infile(file.c_str());
	if (!infile.is_open()) {
		std::cout << RED << "Error: could not open " 
				  << file << RESET << std::endl;
		return 1;
	}

	std::ofstream outfile((file + ".replace").c_str());
	if (!outfile.is_open()) {
		std::cout << RED << "Error: could not create " 
				  << file << ".replace" << RESET << std::endl;
		return 1;
	}

	std::string buffer;
	std::string line;
	while (std::getline(infile, line)) {
		buffer += line;
		if (infile.peek() != EOF)
			buffer += "\n";
	}
	infile.close();

	size_t pos = 0;
	size_t found = 0;
	std::string result;

	while ((found = buffer.find(s1, pos)) != std::string::npos)
	{
		result.append(buffer, pos, found - pos);
		result.append(s2);
		pos = found + s1.length();
	}
	result.append(buffer, pos, buffer.length() - pos);

	outfile << result;
	outfile.close();
	
	std::cout << GREEN << "Replacement done. Output saved to " 
	          << file << ".replace" <<  RESET << std::endl;
	
	return 0;
}

int main(int ac, char *av[])
{
	if (ac != 4){
		std::cout << RED << "Error: wrong number of arguments" << RESET << std::endl;
		return 1;
	}

	std::string file = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (file.empty() || s1.empty() || s2.empty()){
		std::cout << RED << "Error: empty arguments" << RESET << std::endl;
		return 1;
	}

	return (replace_and_write(file, s1, s2));

}