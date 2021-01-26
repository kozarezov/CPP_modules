/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 15:39:51 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/03 16:12:00 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const &other) : AMateria("ice")
{
	(void)other;
}

Ice& Ice::operator=(Ice const &other)
{
	(void)other;
	return (*this);
}

AMateria* Ice::clone() const
{
	Ice *new_materia;

	new_materia = new Ice;
	return (new_materia);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
