/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 12:17:21 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/02 12:35:13 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
public:
	PlasmaRifle(void);
	~PlasmaRifle(void);
	
	PlasmaRifle(const PlasmaRifle &other);
	PlasmaRifle			&operator=(const PlasmaRifle &other);

	void				attack(void) const;
};

#endif
