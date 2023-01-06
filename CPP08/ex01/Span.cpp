/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:14:01 by jmehlig           #+#    #+#             */
/*   Updated: 2022/09/01 16:58:52 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : max() {}

Span::Span(unsigned int max) : max(max) {}

Span::~Span() {}

Span::Span(const Span &s) : max(s.max), v_n(s.v_n) {}

Span &Span::operator=(const Span &s)
{
    if (this == &s)
        return (*this);
    v_n.resize(s.v_n.size());
    std::copy(s.v_n.begin(), s.v_n.end(), v_n.begin());
    return (*this);
}

void Span::addNumber(int i)
{
    if (v_n.size() < max)
        v_n.push_back(i);
    else
        throw AlreadyFilledException();
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for(std::vector<int>::iterator i = begin; i < end; i++)
    {
        try
        {
            this->addNumber(*i);
        }
        catch (const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}

int Span::shortestSpan()
{
    int shortest = INT_MAX;
    
    if (v_n.size() < 2)
        throw TooShortException();
    std::vector<int> copy_v(v_n.size());
    std::copy(v_n.begin(), v_n.end(), copy_v.begin());
    std::sort(copy_v.begin(), copy_v.end());
    for (int i = 0; i + 1 < copy_v.size(); i++)
    {
        if (abs(copy_v[i] - copy_v[i + 1]) < shortest)
            shortest = abs(copy_v[i] - copy_v[i + 1]);
    }
    return (shortest);
}

int Span::longestSpan()
{
    if (v_n.size() < 2)
        throw TooShortException();
    std::vector<int>::iterator min = std::min_element(v_n.begin(), v_n.end());
    std::vector<int>::iterator max = std::max_element(v_n.begin(), v_n.end());
    return (*max- *min);
}