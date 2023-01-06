/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:45:24 by jmehlig           #+#    #+#             */
/*   Updated: 2022/09/01 17:08:02 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    Span test;
    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(-9);
        sp.addNumber(11);
        sp.addNumber(2);
    }
    catch(const std::exception& e)
    {
		std::cout << e.what() << std::endl;
    }
    test = sp;
    Span empty = Span(0);
    try
    {
        empty.shortestSpan();
    }
    catch(const std::exception& e)
    {
		std::cout << e.what() << std::endl;
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << test.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << "\n\n------TEST BIG VECTOR-----\n\n";
    int big_size = 10000;
    Span big = Span(big_size);
    try
    {  
        for(int i = 0; i < INT_MAX; i++)
            big.addNumber(i + i);
    }
    catch(const std::exception& e)
    {
		std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << big.shortestSpan() << std::endl;
        std::cout << big.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
       std::cout << e.what() << std::endl;
    }
    std::cout << "\n\n------TEST OVERLOAD ADD-----\n\n";
    Span bigger = Span(10000);
    std::vector<int> in_v;
    int square;
    for (int i = 0; i < 10000; i++)
    {
        square = square + (2 * i + 1);
        in_v.push_back(square);
    }
    bigger.addNumber(in_v.begin(), in_v.end());
    try
    {
        std::cout << bigger.shortestSpan() << std::endl;
        std::cout << bigger.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
       std::cout << e.what() << std::endl;
    }
    return 0;
}