/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 12:16:57 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/12 13:41:51 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
}

Enemy::Enemy(int hp, std::string const &type)
{
	this->hp = hp;
	this->type = type;
}

Enemy::~Enemy(void)
{
}

Enemy::Enemy(const Enemy &other)
{
	this->hp = other.hp;
	this->type = other.type;
}

Enemy					&Enemy::operator=(const Enemy &other)
{
	if (this == &other)
		return (*this);
	this->hp = other.hp;
	this->type = other.type;
	return (*this);
}

std::string const		Enemy::getType(void) const
{
	return (this->type);
}

int						Enemy::getHP(void) const
{
	return (this->hp);
}

void					Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	else
	{
		if (damage > hp)
			damage = hp;
		hp = hp - damage;
	}
}

void				Enemy::setType(std::string const type)
{
	this->type = type;
}

void				Enemy::setHP(int hp)
{
	this->hp = hp;
}
