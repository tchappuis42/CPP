/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:23:31 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/28 13:55:02 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(std::string name)
{
	std::cout << "Constructor Zombie called" << std::endl;
	this->name_ = name;
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->name_ << " is destroyed !" << std::endl;
	return ;
}

void	Zombie::announce()
{
	std::cout << this->name_ << " : BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
