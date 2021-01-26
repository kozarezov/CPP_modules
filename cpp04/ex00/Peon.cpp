/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 09:10:20 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/01 10:12:13 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
}

Peon::Peon(std::string name) : Victim(name)
{
	this->name = name;
	this->type = "pink pony";
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &other)
{
	this->name = other.name;
	this->type = other.type;
}

Peon				&Peon::operator=(const Peon &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->type = other.type;
	return (*this);
}
