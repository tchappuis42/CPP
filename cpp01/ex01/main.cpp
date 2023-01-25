/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:18:57 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/28 14:01:00 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie *zombie;

	zombie = new Zombie(name);
	return (zombie);
}

void	randomChump(std::string name)
{
	Zombie zombie = Zombie(name);
	zombie.announce();
	return ;
}

int	main()
{
	Zombie	zombar("Keanu");
	Zombie	*zombie;
	Zombie	*zombieHord;

	zombar.announce();
	randomChump("Victor");
	zombie = newZombie("Hajar");
	zombie->announce();
	zombieHord = zombieHorde(4, "leo");
	for (int i = 0; i < 4; i++)
	{
		zombieHord[i].announce();
	}
	delete zombie;
	delete [] zombieHord;
	return (0);
}