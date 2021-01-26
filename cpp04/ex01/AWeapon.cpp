/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 12:16:21 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/03 10:49:21 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::~AWeapon(void)
{
}

AWeapon::AWeapon(const AWeapon &other)
{
	this->name = other.name;
	this->apcost = other.apcost;
	this->damage = other.damage;
}

AWeapon				&AWeapon::operator=(const AWeapon &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->apcost = other.apcost;
	this->damage = other.damage;
	return (*this);
}

std::string const	AWeapon::getName(void) const
{
	return (this->name);
}

int					AWeapon::getAPCost(void) const
{
	return (this->apcost);
}

int					AWeapon::getDamage(void) const
{
	return (this->damage);
}

void				AWeapon::setName(std::string const name)
{
	this->name = name;
}

void				AWeapon::setAPCost(int apcost)
{
	this->apcost = apcost;
}

void				AWeapon::setDamage(int damage)
{
	this->damage = damage;
}
