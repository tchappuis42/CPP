/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:21:05 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/28 13:55:00 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
private:
	std::string	name_;
public:
	
	Zombie(std::string name);
	Zombie();
	~Zombie();

	void	announce();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
