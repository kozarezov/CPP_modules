/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 10:32:27 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/28 10:42:05 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	FragTrap	robot("Arnold");
	ScavTrap	doorkeper("Alfred");
	NinjaTrap	ninja("Naruto");

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

	std::cout << std::endl << "###########################" << std::endl << std::endl;
	
	ninja.rangedAttack("Alfred");
	ninja.meleeAttack("Arnold");	
	ninja.takeDamage(10);
	ninja.takeDamage(200);
	ninja.beRepaired(10);
	ninja.beRepaired(200);
	ninja.ninjaShoebox(robot);
	ninja.ninjaShoebox(doorkeper);
	ninja.ninjaShoebox(ninja);

	return (0);
}
