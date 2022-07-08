/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:08:28 by jmehlig           #+#    #+#             */
/*   Updated: 2022/06/21 14:10:59 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__

# include <string>
# include <iostream>
# include <cstdlib>
# include <sstream>

class Contact
{
	public:
	void setFirstName(std::string name);
	std::string getFirstName();
	void setLastName(std::string name);
	std::string getLastName();
	void setNickName(std::string name);
	std::string getNickName();
	void setPhonenumber(std::string number);
	std::string getPhonenumber();
	void setDarkestSecret(std::string secret);
	std::string getDarkestSecret();
	void setAddedAs(int added);
	int getAddedAs();

	private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
	int added_as;
};

#endif
