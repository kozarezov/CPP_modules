/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 15:39:19 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/03 16:01:47 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const &other)
{
	this->_type = other._type;
	this->_xp = other._xp;
}

AMateria & AMateria::operator=(AMateria const &other)
{
	if (this == &other)
		return (*this);
	this->_type = other._type;
	this->_xp = other._xp;
	return (*this);
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	this->_xp = 0;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp = this->_xp + 10;
}
