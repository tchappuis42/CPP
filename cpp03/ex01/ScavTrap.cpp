/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:26:04 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/28 17:56:20 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Constructor ScavTrap called" << std::endl;
	this->Hit_ = 100;
	this->Energy_= 50;
	this->Attack_ = 20;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Constructor ScavTrap called" << std::endl;
	this->Name_ = name;
	this->Hit_ = 100;
	this->Energy_= 50;
	this->Attack_ = 20;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called" << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "Copy assignment operator ScavTrap called\n";
	this->Name_ = rhs.Name_;
	return *this;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "Copy constructor ScavTrap called\n";
	return ;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->Name_ << " entered Gate keeper mode\n";
	return ;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->Energy_ > 0 && this->Hit_ > 0)
	{	
		std::cout 
		<< "SlavTrap " 
		<< this->Name_ 
		<< " attacks " 
		<< target 
		<< " , causing " 
		<< this->Attack_ 
		<< " points of damage !\n";
		this->Energy_--;
	}
	else if (this->Energy_ == 0)
		std::cout << "SlavpTrap " << this->Name_ << " has no more energy\n";
	else
		std::cout << "SlavTrap " << this->Name_ << " has no more hit point\n";
}
