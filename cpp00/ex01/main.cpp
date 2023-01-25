/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 15:18:58 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/18 15:33:11 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>
#include <string.h>

int main()
{
	Phonebook phonebook;
	std::string	buff;
	bool	run;

	run = true;
	while (run)
	{
		getline(std::cin, buff);
		if(std::cin.eof())
			return (0);
		if (buff == "ADD")
			phonebook.add_contacts();
		else if (buff == "SEARCH")
			phonebook.search_contacts();
		else if (buff == "EXIT")
			run = false;
		else
			std::cout << "UNRECOGNIZABLE COMMAND"<< std::endl;
	}
	return (0);
}