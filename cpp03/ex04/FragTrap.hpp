/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 10:29:14 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/30 17:29:25 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	int			hitPoints;
	int			maxHitPoints;
	int			rangedAttackDamage;
	int			armorDamageReduction;

public:
	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap(const FragTrap &other);

	FragTrap		&operator=(const FragTrap &other);

	void			vaulthunter_dot_exe(std::string const &target);
	void			rangedAttack(std::string const &target);
	int				getHP();
	int				getMaxHP();
	int				getRange();
	int				getArmor();
};

#endif
