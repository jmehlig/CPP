/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:08:25 by jmehlig           #+#    #+#             */
/*   Updated: 2022/06/20 18:26:52 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string name)
{
	first_name = name;
}

std::string Contact::getFirstName(void)
{
	return (first_name);
}

void Contact::setLastName(std::string name)
{
	last_name = name;
}

std::string Contact::getLastName(void)
{
	return (last_name);
}

void Contact::setNickName(std::string name)
{
	nick_name = name;
}

std::string Contact::getNickName(void)
{
	return (nick_name);
}

void Contact::setPhonenumber(std::string number)
{
	phone_number = number;
}

std::string Contact::getPhonenumber(void)
{
	return (phone_number);
}

void Contact::setDarkestSecret(std::string secret)
{
	darkest_secret = secret;
}

std::string Contact::getDarkestSecret(void)
{
	return (darkest_secret);
}

void Contact::setAddedAs(int added)
{
	added_as = added;
}

int Contact::getAddedAs(void)
{
	return (added_as);
}
