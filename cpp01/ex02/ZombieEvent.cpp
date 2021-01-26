/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 09:40:30 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/12 10:36:05 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->type = "Smelly";
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*new_zombie;

	new_zombie = new Zombie(name, this->type);
	return (new_zombie);
}

int 	getRandomNumber(int name)
{
	return (rand() % name);
}

Zombie	*ZombieEvent::randomChump(void)
{
	std::string names[10] = { "Jonny", "Jacob", "William", "Ethan", "Michael", "James", "Henry", "David", "Adam", "Robert" };
	Zombie	*new_zombie;

	srand((unsigned) time(0));
	new_zombie = new Zombie(names[getRandomNumber(10)], this->type);
	return (new_zombie);
}
