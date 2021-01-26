/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 15:40:24 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/03 20:19:16 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria	*inventory[4];
public:
	MateriaSource();
	~MateriaSource();

	MateriaSource(MateriaSource const &other);
	MateriaSource& operator=(MateriaSource const &other);

	void		learnMateria(AMateria *m);
	AMateria*	createMateria(std::string const &type);
};

#endif

