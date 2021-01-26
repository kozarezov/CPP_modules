/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 10:32:27 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/23 15:27:52 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap	robot("Arnold");
	ScavTrap	doorkeper("Alfred");

	robot.rangedAttack("Alfred");
	robot.meleeAttack("Alfred");	
	robot.takeDamage(10);
	robot.takeDamage(200);
	robot.beRepaired(10);
	robot.beRepaired(200);
	robot.vaulthunter_dot_exe("Alfred");
	robot.vaulthunter_dot_exe("Alfred");
	robot.vaulthunter_dot_exe("Alfred");

	std::cout << std::endl << "###########################" << std::endl << std::endl;
	
	doorkeper.rangedAttack("Arnold");
	doorkeper.meleeAttack("Arnold");	
	doorkeper.takeDamage(10);
	doorkeper.takeDamage(200);
	doorkeper.beRepaired(10);
	doorkeper.beRepaired(200);
	doorkeper.challengeNewcomer();
	doorkeper.challengeNewcomer();
	doorkeper.challengeNewcomer();

	return (0);
}
