/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 12:16:43 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/03 10:49:58 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
private:
	std::string			name;
	int					apcost;	
	int					damage;

	AWeapon(void);
public:
	AWeapon(std::string const &name, int apcost, int damage);
	virtual ~AWeapon(void);
	
	AWeapon(const AWeapon &other);
	AWeapon				&operator=(const AWeapon &other);

	std::string const	getName(void) const;
	int					getAPCost(void) const;
	int					getDamage(void) const;
	virtual void		attack(void) const = 0;
	void				setName(std::string const name);
	void				setAPCost(int apcost);
	void				setDamage(int damage);
};

#endif
