/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 12:16:48 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/12 14:11:08 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
}

Character::Character(std::string const &name)
{
	this->name = name;
	this->ap = 40;
	this->weapon = NULL;
}

Character::~Character(void)
{
}

Character::Character(const Character &other)
{
	this->name = other.name;
	this->ap = other.ap;
	this->weapon = other.weapon;
}

Character				&Character::operator=(const Character &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->ap = other.ap;
	this->weapon = other.weapon;
	return (*this);
}

void					Character::recoverAP(void)
{
	this->ap = this->ap + 10;
}

void					Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void					Character::attack(Enemy *enemy)
{
	if (enemy && this->weapon)
	{
		if (this->ap < this->weapon->getAPCost())
		{
			std::cout << "Not enought AP, have: " << this->getAP() << ", need: " << this->weapon->getAPCost() << std::endl;
			return ;
		}
		std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
		this->ap = this->ap - this->weapon->getAPCost();
		this->weapon->attack();
		enemy->takeDamage(this->weapon->getDamage());
		if (enemy->getHP() <= 0)
		{
			delete enemy;
			enemy = NULL;
		}
	}
}

std::string	const		Character::getName(void) const
{
	return (this->name);
}

int						Character::getAP(void) const
{
	return (this->ap);
}

AWeapon					*Character::getWeapon(void) const
{
	return (this->weapon);
}

std::ostream				&operator<<(std::ostream &fout, const Character &character)
{
	if (character.getWeapon())
		fout << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getWeapon()->getName() << std::endl;
	else
		fout << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	return (fout);
}
