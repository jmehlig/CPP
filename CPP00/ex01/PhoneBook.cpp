/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:52:38 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/08 12:29:52 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void PhoneBook::setContact(Contact Contact, int i)
{
	Contacts[i] = Contact;
}

Contact PhoneBook::getContact(int i)
{
	return (Contacts[i]);
}

Contact * PhoneBook::getContacts(void)
{
	return (Contacts);
}

void PhoneBook::setAddedContacts(int added)
{
	added_contacts = added;
}

int PhoneBook::getAddedContacts(void)
{
	return (added_contacts);
}

static void print_entry(std::string entry)
{
	if (entry.length() >= 10)
	{
		std::cout << entry.substr(0, 9) << ".";
		std::cout << "| ";
	}
	else
	{
		std::cout.width(10);
		std::cout << entry << "| ";
	}
}

static int if_number(std::string j_str)
{
	int	i;

	i = 1;
	if (j_str.compare("0") == 0 || j_str.compare("1") == 0 || j_str.compare("2") == 0 || j_str.compare("3") == 0
		|| j_str.compare("4") == 0 || j_str.compare("5") == 0 || j_str.compare("6") == 0 || j_str.compare("7") == 0
		|| j_str.compare("8") == 0)
		i = 0;
	return (i);
}

void PhoneBook::search()
{
	int i;
	int	j;
	std::stringstream stream;
	std::string j_str;

	i = 0;
	std::cout << "\n";
	while (i < 8 && !Contacts[i].getFirstName().empty())
	{
		std::cout.width(10);
		std::cout << i << " | ";
		print_entry(Contacts[i].getFirstName());
		print_entry(Contacts[i].getLastName());
		print_entry(Contacts[i].getNickName());
		std::cout << std::endl;
		i++;
	}
	std::cout << "\nPlease enter the index of the contact you're interested in: ";
	std::getline(std::cin, j_str);
	stream << j_str;
	stream >> j;
	if (if_number(j_str) == 1 || Contacts[j].getFirstName().empty())
		std::cout << "\e[0;35mYou didn't enter a valid index!\e[0m";
	else
	{
		std::cout << std::endl;
		std::cout << "👤First name:     " << Contacts[j].getFirstName() << std::endl;
		std::cout << "👤Last name:      " << Contacts[j].getLastName() << std::endl;
		std::cout << "💜Nickname:       " << Contacts[j].getNickName() << std::endl;
		std::cout << "📱Phone number:   " << Contacts[j].getPhonenumber() << std::endl;
		std::cout << "🔐Darkest secret: " << Contacts[j].getDarkestSecret() << std::endl;
	}
}

static std::string	add_entry(std::string entry_name)
{
	std::string entry;

	std::cout << entry_name;
	while (entry.empty())
	{
		std::getline(std::cin, entry);
		if (entry.empty())
		{
			std::cout << "\e[0;35mYou are not allowed to have empty entrys\e[0m" << std::endl;
			std::cout << entry_name;
		}
	}
	return (entry);
}

static int get_oldest_entry(Contact Contacts[8])
{
	int	lowest_add_number;
	int	lowest_add_index;
	int i;

	lowest_add_number = Contacts[0].getAddedAs();
	lowest_add_index = 0;
	i = 0;
	while (i < 8 && !Contacts[i].getFirstName().empty())
	{
		if (Contacts[i].getAddedAs() < lowest_add_number)
		{
			lowest_add_number = Contacts[i].getAddedAs();
			lowest_add_index = i;
		}
		i++;
	}
	if (i != 8)
		return (i);
	return (lowest_add_index);
}

void PhoneBook::add()
{
	Contact new_Contact;
	int	i;

	std::cout << "\n\e[0;33mPlease enter all information on the new conact:\e[0m\n" << std::endl;
	new_Contact.setFirstName(add_entry("First name: \e[0m"));
	new_Contact.setLastName(add_entry("Last name: \e[0m"));
	new_Contact.setNickName(add_entry("Nickname: \e[0m"));
	new_Contact.setPhonenumber(add_entry("Phone number: \e[0m"));
	new_Contact.setDarkestSecret(add_entry("Darkest Secret: \e[0m"));
	new_Contact.setAddedAs(getAddedContacts());
	i = get_oldest_entry(getContacts());
	setContact(new_Contact, i);
}
