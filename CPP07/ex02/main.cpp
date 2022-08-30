/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:29:42 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/29 18:29:50 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> a(4);
    Array<char>;
    Array<std::string> b(2);

    b[0] = "Hello";
    b[1] = "Wolrd";

    while (1)
    {
        int i = 0;
        try
        {
            a[i] = i;
            i++;
        }
        catch (std::exception)
        {
            "My own Segmentation fault!";
        }
    }
    for (int i = 0; i < 4; i++)
        std::cout << a[i] << std::endl;
}