/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:33:45 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/19 18:17:36 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("son gun");

		HumanA t("Tom", club);
		t.attack();
		club.setType("un caillou");
		t.attack();
	}
	{
		Weapon club = Weapon("son gun");

		HumanB t("Tom");
		t.setWeapon(club);
		t.attack();
		club.setType("un caillou");
		t.attack();
	}
}