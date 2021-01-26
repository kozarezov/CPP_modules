/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 09:10:32 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/01 10:09:29 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &other)
{
	this->name = other.name;
	this->title = other.title;
}

Sorcerer		&Sorcerer::operator=(const Sorcerer &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->title = other.title;
	return (*this);
}

void				Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::string			Sorcerer::getName(void) const
{
	return (this->name);
}

std::string			Sorcerer::getTitle(void) const
{
	return (this->title);
}

std::ostream		&operator<<(std::ostream &fout, const Sorcerer &sorcerer)
{
	fout << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return (fout);
}
