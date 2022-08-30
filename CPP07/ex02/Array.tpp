#pragma once

# include "Array.hpp"

Array::Array<T>(void)
{
		array = new T[0]();
		len = 0;
}

Array::Array<T>(unsigned int n)
{
		array = new T[n]();
		len = n;
}

Array::Array<T>(Array const & src)
{
		array = src.array;
        len = src.len;
}

Array::~Array<T>(void)
{
		delete [] array;
}

Array <T> &Array::operator=(Array const &a)
{
    if (this == &a)
        return (*this);
	array = new T(a.size);
	len = a.size();
	for (int i = 0; i < a->len ; i++)
		array[i] = a.array[i];
}


T &Array::operator[](const int i)
{
	if (len > i)
		return array[i];
	else
		throw std::exception();
}

int Array::getLen() { return (len); }