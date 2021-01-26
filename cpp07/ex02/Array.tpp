/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 11:30:13 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/11 14:38:26 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <iostream>
# include <string>
# include <exception>

template <class T>
class Array 
{
private:
	unsigned int	n;
	T*				array;
public:
	Array(): n(0), array(NULL) 
	{
	};

	Array(unsigned int n)
	{
		this->n = n;
		this->array = new T[n]();
	};
	
	~Array()
	{
		delete[] (this->array);
	};

	Array(Array const & other)
	{
		this->n = other.n;
		if (this->n != 0)
		{
			this->array = new T[other.n];
			for (unsigned int i = 0; i < this->n; i++)
				this->array[i] = other.array[i];
		}
	};

	Array &operator=(Array const & other)
	{
		if (this == &other)
			return (*this);
		if (this->n != 0)
			delete[] (this->array);
		this->n = other.n;
		if (this->n != 0)
		{
			this->array = new T[other.n];
			for (unsigned int i = 0; i < this->n; i++)
				this->array[i] = other.array[i];
		}
		return (*this);
	};

	T &operator[](unsigned int index)
	{
		if (this->n == 0 || index >= this->n)
			throw Array::OutOfLimits();
		return (this->array[index]);
	};

	unsigned int	size()
	{
		return (this->n);
	};

	class OutOfLimits: public std::exception 
	{
		const char* what() const throw()
		{
			return ("Element is out of the limits");
		};
	};
};

#endif