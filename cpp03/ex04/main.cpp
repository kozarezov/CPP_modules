/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 10:32:27 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/11 14:59:23 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main(void)
{
	NinjaTrap	ninja("Naruto");
	SuperTrap	super("Frankenstein");
	
	super.rangedAttack("Naruto");
	super.meleeAttack("Naruto");	
	super.takeDamage(10);
	super.takeDamage(200);
	super.beRepaired(10);
	super.beRepaired(200);
	super.ninjaShoebox(ninja);
	super.vaulthunter_dot_exe("Naruto");

	return (0);
}
