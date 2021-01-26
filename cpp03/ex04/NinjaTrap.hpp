/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 10:09:54 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/30 17:31:32 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
private:
	int				energyPoints;
	int				maxEnergyPoints;
	int				meleeAttackDamage;

public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	~NinjaTrap(void);
	NinjaTrap(const NinjaTrap &other);

	NinjaTrap		&operator=(const NinjaTrap &other);
	
	void			meleeAttack(std::string const &target);
	void			ninjaShoebox(ClapTrap &trap);
	void			ninjaShoebox(NinjaTrap &trap);
	void			ninjaShoebox(FragTrap &trap);
	void			ninjaShoebox(ScavTrap &trap);
	int				getEnergy();
	int				getMaxEnergy();
	int				getMelee();
};

#endif
