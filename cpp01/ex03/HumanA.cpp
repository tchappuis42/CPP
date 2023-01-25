/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:35:37 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/26 16:23:26 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& club) : weapon(club)
{
	std::cout << "Constructor HumanA called" << std::endl;
	this->name_ = name;
	return ;
}

HumanA::~HumanA()
{
	std::cout << "Deconstructor HumanA called" << std::endl;
	return ;
}

void	HumanA::attack()
{
	std::cout << this->name_ << " attack with their ";
	std::cout << this->weapon.getType() << std::endl;
}


