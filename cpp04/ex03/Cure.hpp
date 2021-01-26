/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 15:39:46 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/04 12:50:24 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>
# include <string>

class Cure: public AMateria
{
public:
	Cure();
	~Cure();

	Cure(Cure const &other);
	Cure& operator=(Cure const &other);
		
	AMateria*	clone() const;
	void		use(ICharacter &target);
};

#endif
