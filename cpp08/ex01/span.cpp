/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:36:19 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/14 10:42:03 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::~Span()
{
}

Span::Span(Span const &other)
{
	this->nbrs = other.nbrs;
	this->N = other.N;
}

Span &Span::operator=(Span const &other)
{
	if (this == &other)
		return (*this);
	this->nbrs = other.nbrs;
	this->N = other.N;
	return (*this);
}

void Span::addNumber(int nbr)
{
	if (this->nbrs.size() >= this->N)
		throw Span::AddException();
	this->nbrs.push_back(nbr);
}

int	Span::shortestSpan(void)
{
	std::vector<int>::iterator first;
	std::vector<int>::iterator second;
	int min;
	
	if (this->nbrs.size() == 1 || this->nbrs.empty())
		throw Span::NoFoundException();
	std::sort(this->nbrs.begin(), this->nbrs.end());
	first = this->nbrs.begin();
	second = first + 1;
	min = *second - *first;

	return (min);
}

int	Span::longestSpan(void)
{
	std::vector<int>::iterator first;
	std::vector<int>::iterator second;
	int max;
	
	if (this->nbrs.size() == 1 || this->nbrs.empty())
		throw Span::NoFoundException();
	std::sort(this->nbrs.begin(), this->nbrs.end());
	first = this->nbrs.begin();
	second = this->nbrs.end() - 1;
	max = *second - *first;

	return (max);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for(std::vector<int>::iterator it = begin; it != end; ++it)
	{
		if (this->nbrs.size() >= this->N)
			throw Span::AddException();
		this->nbrs.push_back(*it);
	}
}

const char* Span::AddException::what() const throw()
{
	return ("# Can`t add number. Full stored");
}

const char* Span::NoFoundException::what() const throw()
{
	return ("# There’s no numbers stored, or only one");
}