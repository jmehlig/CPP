/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:00:35 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/23 21:17:43 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for(int i = 0; i < 100; i++)
        ideas[i] = "";
    std::cout << "Brain constructor called!\n";
}

Brain::~Brain()
{
    std::cout << "Brain destructor called\n";
}

Brain::Brain(Brain const &b)
{
    std::cout << "Brain Copy Constructor called\n";
    int i = 0;
    while (i < 100)
    {
        ideas[i] = b.ideas[i];
        i++;
    }
}

Brain &Brain::operator=(Brain const &b)
{
    if (this == &b)
        return (*this);
    int i = 0;
    while (i < 100)
    {
        ideas[i] = b.ideas[i];
        i++;
    }
    return (*this);
}

std::string Brain::getIdeas(int i) { return(ideas[i]); }

void Brain::setIdeas(std::string s, int i) { ideas[i] = s; }
