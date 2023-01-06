/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:52:56 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/30 16:41:47 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <class T>
T max (T a, T b)
{
  T result;

  result = (a>b)? a : b;
  return (result);
}

template <class T>
T min (T a, T b)
{
  T result;

  result = (a<b)? a : b;
  return (result);
}

template <class T>
void swap (T &a, T &b)
{
  T tmp;

  tmp = a;
  a = b;
  b = tmp;
}