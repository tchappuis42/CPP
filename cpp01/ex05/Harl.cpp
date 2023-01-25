/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:47:48 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/25 14:22:50 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Constructor Harl called" << std::endl;
	return ;
}

Harl::~Harl()
{
	std::cout << "Destructor Harl called" << std::endl;
	return ;
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void Harl::complain( std::string level )
{
	void (Harl::*functions[4])();
	std::string	s[4];

	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;

	s[0] = "DEBUG";
	s[1] = "INFO";
	s[2] = "WARNING";
	s[3] = "ERROR";

	for (size_t i = 0; i < 4; i++)
	{
		if (level == s[i])
			return (this->*functions[i])();
	}
	std::cout << "I AM NOT COMPLAINING !" << std::endl;
	return ;
}