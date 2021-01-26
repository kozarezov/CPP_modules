/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 15:39:31 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/03 17:06:21 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const &name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

Character::Character(Character const &other)
{
	*this = other;
}

Character& Character::operator=(Character const &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete (this->inventory[i]);
		this->inventory[i] = other.inventory[i]->clone();
	}
	return (*this);
}

void Character::equip(AMateria *m)
{
	int i;

	i = 0;
	if (m)
	{
		while (i < 4)
		{
			if (!this->inventory[i])
			{
				this->inventory[i] = m;
				break;
			}
			i++;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx]->use(target);
}

std::string const &Character::getName() const
{
	return (this->name);	
}
