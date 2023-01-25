/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:18:11 by tchappui          #+#    #+#             */
/*   Updated: 2022/07/18 15:33:03 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact {

public:

	Contact();
	~Contact();

	void	add_contact(void);
	void	display_contacts(int index);
	void	display_contact();

private:
	std::string	first_name;
	std::string last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

#endif
