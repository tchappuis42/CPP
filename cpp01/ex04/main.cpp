/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:16:29 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/26 16:23:11 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream	file(av[1]);
		if (!file)
		{
			std::cout << "Error: file not found\n";
			return (0);
		}
		std::string		s1 = av[2];
		std::string		s2 = av[3];
		std::string		string;
		std::ofstream	file_dest(strcat(av[1], ".replace"));

		while(file >> string)
		{
			if (string == s1)
				file_dest << s2;
			else
				file_dest << string;
			if (file.peek() == '\n')
				file_dest << "\n";
			if (file.peek() == ' ')
				file_dest <<  " ";
			string.erase();
		}
		std::cout << "s2 = " << s2 << std::endl; 
		file.close();
		file_dest.close();
	}
	else 
		std::cout << "pas le bon nombres d'arguments" << std::endl;
}