/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:27:41 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/30 16:38:25 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

template <class T>
Array<T>::Array(void)
{
		array = new T[0]();
		len = 0;
}

template <class T>
Array<T>::Array(unsigned int n)
{
		array = new T[n]();
		len = n;
}

template <class T>
Array<T>::Array(Array const & src)
{
		array = src.array;
        len = src.len;
}

template <class T>
Array<T>::~Array(void)
{
		//delete [] array;
}

template <class T>
Array<T> &Array<T>::operator=(Array<T> const &a)
{
    if (this == &a)
        return (*this);
	array = new T(a.size);
	len = a.size();
	for (int i = 0; i < a->len ; i++)
		array[i] = a.array[i];
}

template <class T>
T &Array<T>::operator[](const int i)
{
	if (len > i && i >= 0)
		return array[i];
	else
		throw MySegfault();
	
}

template <class T>
int Array<T>::getLen() { return (len); }