/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:34:00 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/28 14:03:45 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	std::cout << "Constructor Wrapon called" << std::endl;
	this->type_ = type;
	return ;
}

Weapon::~Weapon()
{
	std::cout << "Deconstructor Wrapon called" << std::endl;
	return ;
}

void	Weapon::setType(std::string type)
{
	this->type_ = type;
}

const std::string & Weapon::getType()
{
	return (this->type_);
}

