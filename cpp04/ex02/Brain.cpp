/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:06:25 by tchappui          #+#    #+#             */
/*   Updated: 2022/08/26 17:27:29 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor Brain called\n";
	for (size_t i = 0; i < 100; i++)
		this->ideas_[i] = "eat";
	return ;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Copy constructor Brain called\n";
	*this = src;
	return ;
}

Brain & Brain::operator=(Brain const & rhs)
{
	std::cout << "Copy assignment operator Brain called\n";
	if (this != &rhs)
	{
		for (size_t i = 0; i < 100; i++)
		{
			this->ideas_[i] = rhs.ideas_[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
	return ;
}
