/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:24:41 by tchappui          #+#    #+#             */
/*   Updated: 2022/08/23 14:43:54 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	kevin("kevin");

	for (size_t i = 0; i < 6; i++)
	{
		kevin.attack("Keanu");
		kevin.beRepaired(2);
	}
}