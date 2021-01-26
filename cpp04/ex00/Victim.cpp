/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 09:10:02 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/01 10:02:07 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
}

Victim::Victim(std::string name)
{
	this->name = name;
	this->type = "cute little sheep";
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &other)
{
	this->name = other.name;
	this->type = other.type;
}

Victim			&Victim::operator=(const Victim &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->type = other.type;
	return (*this);
}

void			Victim::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a " << this->type + '!' << std::endl;
}

std::string		Victim::getName(void) const
{
	return (this->name);
}

std::ostream	&operator<<(std::ostream &fout, const Victim &victim)
{
	fout << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return (fout);
}
