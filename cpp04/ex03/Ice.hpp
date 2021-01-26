/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 15:39:56 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/03 16:12:42 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>
# include <string>

class Ice: public AMateria
{
public:
	Ice();
	~Ice();

	Ice(Ice const &other);
	Ice& operator=(Ice const &other);
	
	AMateria*	clone() const;
	void		use(ICharacter &target);
};

#endif
