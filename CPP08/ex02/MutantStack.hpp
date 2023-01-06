/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:10:26 by jmehlig           #+#    #+#             */
/*   Updated: 2022/09/01 17:55:42 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <iterator>
#include <deque>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{	
	
	public:

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return this->c.begin();} //c is a type in stack, that accesses the underlying container
	iterator end() { return this->c.end();}
	iterator begin() const {return this->c.begin();}
	iterator end() const { return this->c.end();}
};