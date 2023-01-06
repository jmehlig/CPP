/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:29:38 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/30 16:31:07 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <class T>
class Array
{
    private:
	    T* array;
	    int len;

    public:
        Array<T>(void);
        Array<T>(unsigned int n);
    	Array<T>(Array const & src);
    	~Array<T>(void);
    	Array<T> &operator=(Array const &a);
    	T& operator[](const int i);
		class MySegfault : public std::exception {};
        int getLen();
};