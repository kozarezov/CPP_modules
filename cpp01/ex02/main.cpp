/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 10:36:15 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/12 10:50:39 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	Zombie		*Zombie_1;
	Zombie		*Zombie_2;
	Zombie		*Zombie_3;
	ZombieEvent	event;
	
	Zombie_1 = event.randomChump();
	Zombie_1->announce();
	delete (Zombie_1);

	event.setZombieType("Fresh");
	Zombie_2 = event.newZombie("Ivan");
	Zombie_2->announce();
	delete (Zombie_2);
	return (0);
}
