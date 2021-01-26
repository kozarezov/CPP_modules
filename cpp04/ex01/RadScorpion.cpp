/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 12:17:34 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/03 10:55:27 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &other) : Enemy(other.getHP(), other.getType())
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion				&RadScorpion::operator=(const RadScorpion &other)
{
	if (this == &other)
		return (*this);
	this->setHP(other.getHP());
	this->setType(other.getType());
	return (*this);
}
