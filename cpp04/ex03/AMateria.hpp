/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 15:39:24 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/04 12:56:39 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <string>
# include <iostream>

class ICharacter;

class AMateria
{
private:
	std::string			_type;
	unsigned int		_xp;

	AMateria();
public:
	AMateria(std::string const &type);
	virtual ~AMateria();

	AMateria(AMateria const &other);
	AMateria & operator=(AMateria const &other);

	std::string const	&getType() const;
	unsigned int		getXP() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter &target);
};

#endif
