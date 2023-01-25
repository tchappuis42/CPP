/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:32:17 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/28 14:02:57 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
	private:
		std::string type_;
		
	public:
		Weapon(std::string type);
		~Weapon();

		void				setType(std::string type);
		const std::string &	getType();
};

#endif