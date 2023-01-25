/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:20:54 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/18 15:33:04 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ios>
#include <limits>
#include "contact.hpp"

Contact::Contact()
{
	std::cout << "Constructor Contact called" << std::endl;
	return ;
}

Contact::~Contact()
{
	std::cout << "Destructor Contact called" << std::endl;
	return ;
}

void Contact::add_contact(void)
{
	while (this->first_name.size() == 0)
	{
		std::cout << "First name : ";
		getline(std::cin, this->first_name);
		if(std::cin.eof())
			return ;
	}
	while (this->last_name.size() == 0)
	{
		std::cout << "Last name : ";
		getline(std::cin, this->last_name);
		if(std::cin.eof())
			return ;
	}
	while (this->nickname.size() == 0)
	{
		std::cout << "Nickname : ";
		getline(std::cin, this->nickname);
		if(std::cin.eof())
			return ;
	}
	while (this->phone_number.size() == 0)
	{
		std::cout << "Phone number : ";
		getline(std::cin, this->phone_number);
		if(std::cin.eof())
			return ;
	}
	while (this->darkest_secret.size() == 0)
	{
		std::cout << "Darkest secret : ";
		getline(std::cin, this->darkest_secret);
		if(std::cin.eof())
			return ;
	}
}
std::string toolong(std::string info)
{
	std::string	ret;

	ret = info;
	ret.resize(10);
	ret.replace(9, 9, ".");
	return (ret);
}

std::string resize(std::string info)
{
	std::string	ret;

	ret = info;
	while (ret.length() < 10)
	{
		ret.insert(0, " ");
	}
	return (ret);
}

std::string	getinfo(std::string info)
{
	if(info.length() > 10)
		return (toolong(info));
	return (resize(info));
}

void Contact::display_contacts(int index)
{
	std::string name[3];
	name[0] = getinfo(this->first_name);
	name[1] = getinfo(this->last_name);
	name[2] = getinfo(this->nickname);

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|         " << index;
	for (size_t i = 0; i < 3; i++)
	{
		std::cout << "|";
		std::cout << name[i];
	}
	std::cout << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void Contact::display_contact()
{
	std::cout << "First name : " << this->first_name;
	std::cout << std::endl;
	std::cout << "Last name : " << this->last_name;
	std::cout << std::endl;
	std::cout << "Nickname : " << this->nickname;
	std::cout << std::endl;
	std::cout << "First : " << this->phone_number;
	std::cout << std::endl;
	std::cout << "First name : " << this->darkest_secret;
	std::cout << std::endl;
}