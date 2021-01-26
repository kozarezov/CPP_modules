/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 12:17:25 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/03 10:53:26 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist(void)
{
}

PowerFist::PowerFist(const PowerFist &other) : AWeapon(other.getName(), other.getAPCost(), other.getDamage())
{
}

PowerFist			&PowerFist::operator=(const PowerFist &other)
{
	if (this == &other)
		return (*this);
	this->setName(other.getName());
	this->setAPCost(other.getAPCost());
	this->setDamage(other.getDamage());
	return (*this);
}

void				PowerFist::attack(void) const
{
	std::cout <<  "* pschhh... SBAM! *" << std::endl;
}
