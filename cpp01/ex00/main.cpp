/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:18:57 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/28 13:43:10 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	zombar("Keanu");
	Zombie	*zombie;

	zombar.annouce();
	randomChump("J-B");
	zombie = newZombie("Hajar");
	zombie->annouce();
	delete zombie;
	return (0);
}