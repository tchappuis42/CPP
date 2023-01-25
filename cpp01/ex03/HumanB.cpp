/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:37:19 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/19 18:18:50 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	std::cout << "Constructor HumanB called" << std::endl;
	this->name_ = name;
	return ;
}

HumanB::~HumanB()
{
	std::cout << "Deconstructor HumanB called" << std::endl;
	return ;
}

void	HumanB::attack()
{
	std::cout << this->name_ << " attack with their ";
	std::cout << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &club)
{
	this->weapon = &club;
}
