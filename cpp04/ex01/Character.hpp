/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 12:16:52 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/02 19:54:08 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string 			name;
	int						ap;
	AWeapon					*weapon;

	Character(void);
public:
	Character(std::string const &name);
	~Character(void);
	
	Character(const Character &other);
	Character				&operator=(const Character &other);

	void					recoverAP(void);
	void					equip(AWeapon *);
	void					attack(Enemy *);
	std::string const		getName(void) const;	
	int						getAP(void) const;
	AWeapon					*getWeapon(void) const;
};

std::ostream				&operator<<(std::ostream &fout, const Character &character);

#endif
