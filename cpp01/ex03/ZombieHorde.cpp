/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 10:37:07 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/14 12:17:18 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->N = N;
	this->type = "Smelly";
	std::srand((unsigned) time(0));
	if (N > 0)
	{
		this->zombies = new Zombie[N];
		for (int i = 0; i < N; i++)
			this->random_name(this->zombies[i]);
		std::cout << "# Horde is alive" << std::endl;
	}
	else
		std::cout << "# Wrong number of zombies!" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->zombies;
	std::cout << "# Horde is destroyed" << std::endl;
}

void	ZombieHorde::all_announce()
{
	for (int i = 0; i < this->N; i++)
		this->zombies[i].announce();
}

int 	getRandomNumber(int name)
{
	return (std::rand() % name);
}

void	ZombieHorde::random_name(Zombie& new_zombie)
{
	std::string names[10] = { "Jonny", "Jacob", "William", "Ethan", "Michael", "James", "Henry", "David", "Adam", "Robert" };

	new_zombie.init_zombie(names[getRandomNumber(10)], this->type);
}