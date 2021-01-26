/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 14:24:27 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/23 15:08:45 by ceccentr         ###   ########.fr       */
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
	std::cout << "This is my equal copy!";
	std::cout << std::endl;
	return (*this);
}

void			ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP ";
	std::cout << this->name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << this->rangedAttackDamage;
	std::cout << " points of damage!";
	std::cout << std::endl;
}

void			ScavTrap::meleeAttack(std::string const &target)
{	
	std::cout << "SC4V-TP ";
	std::cout << this->name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at melee, causing ";
	std::cout << this->meleeAttackDamage;
	std::cout << " points of damage!";
	std::cout << std::endl;
}

void			ScavTrap::takeDamage(unsigned int amount)
{	
	int	finish_damage;

	if ((int)amount > this->armorDamageReduction)
		finish_damage = amount - this->armorDamageReduction;
	else
		finish_damage = 0;
	if (finish_damage > this->hitPoints)
		finish_damage = this->hitPoints;
	std::cout << "SC4V-TP ";
	std::cout << this->name;
	std::cout << " take ";
	std::cout << finish_damage;
	std::cout << " damage.";
	std::cout << std::endl;
	this->hitPoints -= finish_damage;
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	int	finish_repaired;

	if ((int)amount + this->hitPoints > this->maxHitPoints)
		finish_repaired = this->maxHitPoints - this->hitPoints;
	else
		finish_repaired = amount;
	std::cout << "SC4V-TP ";
	std::cout << this->name;
	std::cout << " repaired ";
	std::cout << finish_repaired;
	std::cout << " hitPoints.";
	std::cout << std::endl;
	this->hitPoints += finish_repaired;
}

void			ScavTrap::challengeNewcomer(void)
{
	std::string ways[3] = {"Go to a party!", "Win in my lottery!", "We can play a CS GO!"};

	std::cout << "SC4V-TP " << this->name << ": I hate a war, but there is another way...";
	std::cout << ways[rand() % 3] << std::endl;
}
