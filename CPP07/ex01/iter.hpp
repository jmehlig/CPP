/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:09:02 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/30 16:42:13 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <class T>
void iter(T *addr, int len, void (*f)(T&))
{
    int i = 0;

    while (i < len)
    {
        f(addr[i]);
        i++;
    }
}

template <class T>
void add_one (T &a)
{
  a++;
}