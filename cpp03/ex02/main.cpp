/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:24:41 by tchappui          #+#    #+#             */
/*   Updated: 2022/08/19 14:38:55 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	//ClapTrap	kevin("kevin");
	//ClapTrap	luc (kevin);
	ScavTrap	Tom("tom");
	//ScavTrap	guigui;
	ScavTrap	jul (Tom);
	FragTrap	luca;

	//guigui = Tom;

	// for (size_t i = 0; i < 4; i++)
	// {
	// 	Tom.attack("joseph");
	// 	Tom.takeDamage(50);
	// 	Tom.beRepaired(2);
	// }
	// for (size_t i = 0; i < 4; i++)
	// {
	// 	guigui.guardGate();
	// 	guigui.attack("joseph");
	// 	guigui.takeDamage(50);
	// 	guigui.beRepaired(2);
	// }
	for (size_t i = 0; i < 4; i++)
	{
		jul.guardGate();
		jul.attack("joseph");
		jul.takeDamage(50);
		jul.beRepaired(2);
	}
	for (size_t i = 0; i < 4; i++)
	{
		luca.highFivesGuys();
		luca.attack("joseph");
		luca.takeDamage(50);
		luca.beRepaired(2);
	}

}