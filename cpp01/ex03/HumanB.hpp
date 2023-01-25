/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:36:10 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/19 18:20:09 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string			name_;
		Weapon				*weapon;

	public:
		HumanB(std::string name);
		~HumanB();

		void	setWeapon(Weapon &club);
		void	attack();
};

#endif