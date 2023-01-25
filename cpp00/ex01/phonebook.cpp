/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:46:30 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/18 15:32:48 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <sstream>

Phonebook::Phonebook()
{
	std::cout << "Constructor phonebook called" << std::endl;
	this->index = 0;
	this->nb_contact = 0;
	return ;
}

Phonebook::~Phonebook()
{
	std::cout << "Destructor phonebook called" << std::endl;
	return ;
}

void	Phonebook::add_contacts(void)
{
	if (this->index == 8)
		this->index = 0;
	this->contacts[this->index].add_contact();
	this->index += 1;
	if (this->nb_contact < 8)
		this->nb_contact += 1;
}

int	chek_arg(std::string arg)
{
	if (arg.length() > 1)
		return (0);
	if (std::isdigit(arg[0]) == 0)
		return (0);
	return (1);
}

void	Phonebook::search_contacts(void)
{
	std::string buff;
	int nb;

	for (int i = 0; i < this->nb_contact; i++)
	{
		this->contacts[i].display_contacts(i);
	}
	std::cout << "enter an index : ";
	getline(std::cin, buff);
	if(std::cin.eof())
		return ;
	if (chek_arg(buff))
	{
		std::istringstream(buff) >> nb;
		if (nb < nb_contact)
		{
			this->contacts[nb].display_contact();
			return ;
		}
	}
	std::cout << "unknown index" << std::endl;
}
