/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:12:29 by tchappui          #+#    #+#             */
/*   Updated: 2022/08/25 14:03:24 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor ClapTrap called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor ClapTrap called" << std::endl;
	this->Name_ = name;
	this->Attack_ = 0;
	this->Hit_ = 10;
	this->Energy_ = 10;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Copy assignment operator ClapTrap called\n";
	this->Name_ = rhs.Name_;
	return *this;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Copy constructor called\n";
	*this = src;

	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap called" << std::endl;
	return ;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Energy_ > 0 && this->Hit_ > 0)
	{	
		std::cout 
		<< "ClapTrap " 
		<< this->Name_ 
		<< " attacks " 
		<< target 
		<< " , causing " 
		<< this->Attack_ 
		<< " points of damage !\n";
		this->Energy_--;
	}
	else if (this->Energy_ == 0)
		std::cout << "ClapTrap " << this->Name_ << " has no more energy\n";
	else
		std::cout << "ClapTrap " << this->Name_ << " has no more hit point\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Energy_ > 0 && this->Hit_ > 0)
	{
		std::cout
		<< "ClapTrap "
		<< this->Name_
		<< " take "
		<< amount
		<< " points of damage!\n";
		this->Hit_ -= amount;
	}
	else if (this->Energy_ == 0)
		std::cout << "ClapTrap " << this->Name_ << " has no more energy\n";
	else
		std::cout << "ClapTrap " << this->Name_ << " has no more hit point\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_ > 0 && this->Hit_ > 0)
	{
		std::cout
		<< "ClapTrap "
		<< this->Name_
		<< " regains "
		<< amount
		<< " hit points\n";
		this->Hit_ += amount;
		this->Energy_--;
	}
	else if (this->Energy_ == 0)
		std::cout << "ClapTrap " << this->Name_ << " has no more energy\n";
	else
		std::cout << "ClapTrap " << this->Name_ << " has no more hit point\n";
}
