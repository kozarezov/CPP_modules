/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 11:54:01 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/30 13:11:21 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->hitPoints = 0;
	this->maxHitPoints = 0;
	this->energyPoints = 0;
	this->maxEnergyPoints = 0;
	this->level = 0;
	this->name = "Default";
	this->meleeAttackDamage = 0;
	this->rangedAttackDamage = 0;
	this->armorDamageReduction = 0;
	this->type = "CL4P-TP ";
	std::cout << "ClapTrap is initialized ." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->hitPoints = 0;
	this->maxHitPoints = 0;
	this->energyPoints = 0;
	this->maxEnergyPoints = 0;
	this->name = name;
	this->meleeAttackDamage = 0;
	this->rangedAttackDamage = 0;
	this->armorDamageReduction = 0;
	this->type = "CL4P-TP ";
	std::cout << "ClapTrap initialized." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap stoped." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->name = other.name;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
	this->type = other.type;
	std::cout << "ClapTrap cloned." << std::endl;
}

ClapTrap		&ClapTrap::operator=(const ClapTrap &other)
{
	if (this == &other)
		return(*this);
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->name = other.name;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
	this->type = other.type;
	std::cout << "ClapTrap cloned." << std::endl;
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << this->type;
	std::cout << this->name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << this->rangedAttackDamage;
	std::cout << " points of damage!";
	std::cout << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target)
{	
	std::cout << this->type;
	std::cout << this->name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at melee, causing ";
	std::cout << this->meleeAttackDamage;
	std::cout << " points of damage!";
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{	
	int	finish_damage;

	if ((int)amount > this->armorDamageReduction)
		finish_damage = amount - this->armorDamageReduction;
	else
		finish_damage = 0;
	if (finish_damage > this->hitPoints)
		finish_damage = this->hitPoints;
	std::cout << this->type;
	std::cout << this->name;
	std::cout << " take ";
	std::cout << finish_damage;
	std::cout << " damage.";
	std::cout << std::endl;
	this->hitPoints -= finish_damage;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	int	finish_repaired;

	if ((int)amount + this->hitPoints > this->maxHitPoints)
		finish_repaired = this->maxHitPoints - this->hitPoints;
	else
		finish_repaired = amount;
	std::cout << this->type;
	std::cout << this->name;
	std::cout << " repaired ";
	std::cout << finish_repaired;
	std::cout << " hitPoints.";
	std::cout << std::endl;
	this->hitPoints += finish_repaired;
}

