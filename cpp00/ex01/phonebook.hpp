/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:39:35 by tchappui          #+#    #+#             */
/*   Updated: 2022/06/28 14:54:38 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"
# include <iostream>

class Phonebook {

public:

	Phonebook();
	~Phonebook();

	void	add_contacts(void);
	void	search_contacts(void);

private:
	Contact	contacts[8];
	int		index;
 	int		nb_contact;
};

#endif