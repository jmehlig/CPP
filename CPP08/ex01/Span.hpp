/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:14:08 by jmehlig           #+#    #+#             */
/*   Updated: 2022/09/01 16:55:42 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <vector>
#include <iostream>
#include <limits>

class Span
{
    private:
        unsigned int max;
        std::vector<int> v_n;

    public:
        Span();
        Span(unsigned int N);
        ~Span();
        Span(const Span &s);
        Span &operator=(const Span &s);
        class AlreadyFilledException : public std::exception {const char * what() const throw () { return "\033[31mThe vector is already filled!\033[0m";}};
        class TooShortException : public std::exception {const char * what() const throw () { return "\033[31mThe vector is too short for this operation!\033[0m";}};
        void addNumber(int i);
        void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
};