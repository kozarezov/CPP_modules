/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 12:17:16 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/03 10:56:50 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle(void)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &other) : AWeapon(other.getName(), other.getAPCost(), other.getDamage())
{
}

PlasmaRifle	&PlasmaRifle::operator=(const PlasmaRifle &other)
{
	if (this == &other)
		return (*this);
	this->setName(other.getName());
	this->setAPCost(other.getAPCost());
	this->setDamage(other.getDamage());
	return (*this);
}

void		PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
