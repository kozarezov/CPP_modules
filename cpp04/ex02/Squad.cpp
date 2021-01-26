/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 11:31:58 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/03 15:12:56 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

Squad::Squad()
{
	this->count_units = 0;
	this->squad = NULL;
}

Squad::Squad(Squad const &other)
{
	this->count_units = other.count_units;
	if (this->count_units > 0)
	{
		this->squad = new ISpaceMarine*[this->count_units];
		for (int i = 0; i < this->count_units; i++)
			this->squad[i] = other.getUnit(i)->clone();
	}
}

Squad::~Squad()
{
	if (this->count_units > 0)
		this->delete_squad();
	this->squad = NULL;
}

Squad &Squad::operator=(Squad const &other)
{
	if (this == &other)
		return (*this);
	if (this->count_units > 0)
		this->delete_squad();
	this->count_units = other.count_units;
	this->squad = new ISpaceMarine*[this->count_units];
	for (int i = 0; i < this->count_units; i++)
		this->squad[i] = other.getUnit(i)->clone();
	return (*this);
}

int Squad::getCount() const
{
	return (this->count_units);
}

ISpaceMarine* Squad::getUnit(int index) const
{
	if (index >= 0 && index < this->count_units)
		return (this->squad[index]);
	else
		return (NULL);	
}

int Squad::push(ISpaceMarine *marine)
{
	if (!marine)
		return (this->count_units);
	else
	{
		for (int i = 0; i < this->count_units; i++)
		{
			if (this->squad[i] == marine)
				return (this->count_units);
		}
		this->increase_size(marine);
		return (this->count_units);
	}
}

void	Squad::delete_squad()
{
	if (this->count_units > 0)
	{
		for (int i = 0; i < this->count_units; i++)
			delete this->squad[i];
		delete[] this->squad;
	}
	
}

void	Squad::increase_size(ISpaceMarine *marine)
{
	ISpaceMarine	**tmp;

	tmp = new ISpaceMarine * [this->count_units + 1];
	for (int i = 0; i < this->count_units; i++)
		tmp[i] = this->squad[i];
	delete[] this->squad;
	tmp[this->count_units] = marine;
	this->count_units++;
	this->squad = tmp;
}