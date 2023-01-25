/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:24:34 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/28 18:24:53 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Constructor FragTrap called" << std::endl;
	this->Hit_ = 100;
	this->Energy_= 100;
	this->Attack_ = 30;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Constructor FragTrap called" << std::endl;
	this->Name_ = name;
	this->Hit_ = 100;
	this->Energy_= 100;
	this->Attack_ = 30;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "Copy assignment operator FragTrap called\n";
	this->Name_ = rhs.Name_;
	return *this;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "Copy constructor FragTrap called\n";
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->Name_ << " said : give me a highfive\n";
	return ;
}
