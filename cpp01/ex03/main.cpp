/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:34:25 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/14 12:16:49 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int			main(void)
{
	ZombieHorde horde = ZombieHorde(20);

	std::cout << "# Horde announce:" << std::endl;
	horde.all_announce();
	return (0);
}
