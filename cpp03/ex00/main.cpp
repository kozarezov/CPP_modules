/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 10:32:27 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/23 11:39:28 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	robot("Arnold");

	robot.rangedAttack("Bot");
	robot.meleeAttack("Bot");	
	robot.takeDamage(10);
	robot.takeDamage(200);
	robot.beRepaired(10);
	robot.beRepaired(200);
	robot.vaulthunter_dot_exe("Bot");
	robot.vaulthunter_dot_exe("Bot");
	robot.vaulthunter_dot_exe("Bot");
	return (0);
}
