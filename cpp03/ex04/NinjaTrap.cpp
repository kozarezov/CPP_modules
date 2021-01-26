/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 10:09:48 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/30 17:33:00 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void): ClapTrap()
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	this->type = "NINJ4-TP ";
	std::cout << "I am Ninja!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	this->type = "NINJ4-TP ";
	std::cout << "I am Ninja, my name is " << this->name << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Ninja didn't die!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &other)
{
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
	std::cout << "Ninja - cloned!" << std::endl;
}

NinjaTrap			&NinjaTrap::operator=(const NinjaTrap &other)
{	
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
	std::cout << "Ninja - cloned!" << std::endl;
	return(*this);
}

void				NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	std::cout << this->type << "Hit me CL4P-TP!" << std::endl;
	trap.meleeAttack(this->name);
}

void				NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << this->type << "Hit me NINJ4-TP!" << std::endl;
	trap.meleeAttack(this->name);
	std::cout << this->type << "...WTF! I hit myself...?!?!" << std::endl;
}

void				NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << this->type << "Hit me FR4G-TP!" << std::endl;
	trap.meleeAttack(this->name);
}

void				NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::cout << this->type << "Hit me SC4V-TP!" << std::endl;
	trap.meleeAttack(this->name);
}

void	NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NINJ4-TP ";
	std::cout << this->name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at melee, causing ";
	std::cout << this->meleeAttackDamage;
	std::cout << " points of damage!";
	std::cout << std::endl;
}

int				NinjaTrap::getEnergy()
{
	return(this->energyPoints);
}

int				NinjaTrap::getMaxEnergy()
{
	return(this->maxEnergyPoints);
}

int				NinjaTrap::getMelee()
{
	return(this->meleeAttackDamage);
}
