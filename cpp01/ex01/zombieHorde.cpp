/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:58:02 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/28 14:08:25 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombie;

	zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie[i].setname(name);
	}
	return (zombie);
}
