/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:42:48 by jmehlig           #+#    #+#             */
/*   Updated: 2022/06/21 20:58:21 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

# include <string>
# include <iostream>
#include <ostream>
# include <cstdlib>
# include <sstream>
# include "Contact.hpp"

class PhoneBook
{
	private:
	Contact Contacts[8];
	int added_contacts;

	public:
	void setContact(Contact Contact, int i);
	Contact getContact(int i);
	Contact * getContacts();
	void setAddedContacts(int added);
	int getAddedContacts();
	void add();
	void search();
};

#endif
