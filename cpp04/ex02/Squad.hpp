/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 11:32:04 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/03 13:16:11 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISpaceMarine.hpp"
# include "ISquad.hpp"

class Squad: public ISquad
{
private:
	int 			count_units;
	ISpaceMarine	**squad;
public:
	Squad();
	virtual ~Squad();

	Squad(Squad const &other);
	Squad			&operator=(Squad const &other);

	int				getCount() const;
	ISpaceMarine	*getUnit(int index) const;
	int				push(ISpaceMarine *marine);
	void			increase_size(ISpaceMarine *marine);
	void			delete_squad();

};

#endif
