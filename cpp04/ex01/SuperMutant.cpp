/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 12:17:43 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/03 10:56:17 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &other) : Enemy(other.getHP(), other.getType())
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant				&SuperMutant::operator=(const SuperMutant &other)
{
	if (this == &other)
		return (*this);
	this->setHP(other.getHP());
	this->setType(other.getType());
	return (*this);
}

void					SuperMutant::takeDamage(int damage)
{
	int		final_damage;
	
	final_damage = damage - 3;
	Enemy::takeDamage(final_damage);
}
