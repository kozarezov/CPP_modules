/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 14:24:27 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/28 10:37:10 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	srand((unsigned) time(0));
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->name = "Default";
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	this->type = "SC4V-TP ";
	std::cout << "You won't pass!";
	std::cout << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{	
	srand((unsigned) time(0));
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	this->type = "SC4V-TP ";
	std::cout << "You won't pass! I am doorkeper: " << this->name;
	std::cout << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Door is broken..." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	srand((unsigned) time(0));
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->level = other.level;
	this->name = other.name;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
	this->type = other.type;
	std::cout << "Don't copy me, I can handle it myself!";
	std::cout << std::endl;
}

ScavTrap		&ScavTrap::operator=(const ScavTrap &other)
{
	srand((unsigned) time(0));
	if (this == &other)
		return(*this);
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->level = other.level;
	this->name = other.name;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
	this->type = other.type;
	std::cout << "This is my equal copy!";
	std::cout << std::endl;
	return (*this);
}

void			ScavTrap::challengeNewcomer(void)
{
	std::string ways[3] = {"Go to a party!", "Win in my lottery!", "We can play a CS GO!"};

	std::cout << this->type << this->name << ": I hate a war, but there is another way...";
	std::cout << ways[rand() % 3] << std::endl;
}
