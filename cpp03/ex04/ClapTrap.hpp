/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 11:53:45 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/11 14:52:27 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
protected:
	int				hitPoints;
	int				maxHitPoints;
	int				energyPoints;
	int				maxEnergyPoints;
	int				level;
	std::string		name;
	int				meleeAttackDamage;
	int				rangedAttackDamage;
	int				armorDamageReduction;
	std::string		type;

	ClapTrap(void);
	ClapTrap(std::string name);
public:
	~ClapTrap(void);
	ClapTrap(const ClapTrap &other);

	ClapTrap		&operator=(const ClapTrap &other);
	
	virtual void	rangedAttack(std::string const &target);
	virtual void	meleeAttack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

};

#endif
