/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:37:45 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/06 10:34:22 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook myPhoneBook;
	std::string command;

	myPhoneBook.setAddedContacts(0);
	std::cout << "\n\e[0;33mWelcome to my awesome crappy Phonebook\e[0m 😍📖😍\n" << std::endl;
	while (1)
	{
		std::cout << "Please enter a command >> ";
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
		{
			myPhoneBook.add();
			myPhoneBook.setAddedContacts(myPhoneBook.getAddedContacts() + 1);
		}
		else if (command.compare("SEARCH") == 0)
			myPhoneBook.search();
		else if (command.compare("EXIT") == 0)
			break ;
		else
			std::cout << "\e[0;35m" << command << " is NOT a valid command, please type in ADD, SEARCH or EXIT\e[0m";
		std::cout << std::endl;

	}
	return 0;
}
