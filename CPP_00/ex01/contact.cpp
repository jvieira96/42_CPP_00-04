/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <jpedro-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:35:30 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/07/30 15:06:59 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

void Contact::set_first_name(const std::string& first_name)
{
	this->first_name = first_name;
	return;
};

void Contact::set_last_name(const std::string& last_name)
{
	this->last_name = last_name;
	return;
};
void Contact::set_nickname(const std::string& nickname)
{
	this->nickname = nickname;
	return;
};
void Contact::set_phone_number(const std::string& phone_number)
{
	this->phone_number = phone_number;
	return;
};

void Contact::set_darkest_secret(const std::string& darkest_secret)
{
	this->darkest_secret = darkest_secret;
	return;
};

std::string Contact::get_first_name()
{
	return this->first_name;
};

std::string Contact::get_last_name()
{
	return this->last_name;
};

std::string Contact::get_nickname()
{
	return this->nickname;
};

std::string Contact::get_phone_number()
{
	return this->phone_number;
};

std::string Contact::get_darkest_secret()
{
	return this->darkest_secret;
};
