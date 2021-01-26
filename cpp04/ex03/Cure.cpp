/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 15:39:42 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/03 16:12:52 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &other) : AMateria("cure")
{
	(void)other;
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const &other)
{
	(void)other;
	return (*this);
}

AMateria*	Cure::clone() const
{
	Cure *new_materia;

	new_materia = new Cure;
	return (new_materia);
}

void 		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}
