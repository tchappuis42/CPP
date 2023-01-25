/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:30:13 by tchappui          #+#    #+#             */
/*   Updated: 2022/06/30 13:58:41 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <string>
#include <iostream>
#include <algorithm>

void	ft_toupper(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
		str[i] = toupper(str[i]);
	std::cout << str;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string s = argv[i];
			ft_toupper(s);
		}
		std::cout << std::endl;
	}
}
