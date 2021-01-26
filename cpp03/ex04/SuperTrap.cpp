/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 11:18:20 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/30 17:40:06 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	this->ClapTrap::hitPoints = FragTrap::getHP();
	this->ClapTrap::maxHitPoints = FragTrap::getMaxHP();
	this->ClapTrap::energyPoints = NinjaTrap::getEnergy();
	this->ClapTrap::maxEnergyPoints = NinjaTrap::getMaxEnergy();
	this->level = 1;
	this->name = "Default";
	this->ClapTrap::meleeAttackDamage = NinjaTrap::getMelee();
	this->ClapTrap::rangedAttackDamage = FragTrap::getRange();
	this->ClapTrap::armorDamageReduction = FragTrap::getArmor();
	this->type = "SPR-TP ";
	std::cout << "OMG... Am I NINJ4-TP or FR4G-TP?" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{	
	this->ClapTrap::hitPoints = FragTrap::getHP();
	this->ClapTrap::maxHitPoints = FragTrap::getMaxHP();
	this->ClapTrap::energyPoints = NinjaTrap::getEnergy();
	this->ClapTrap::maxEnergyPoints = NinjaTrap::getMaxEnergy();
	this->level = 1;
	this->name = name;
	this->ClapTrap::meleeAttackDamage = NinjaTrap::getMelee();
	this->ClapTrap::rangedAttackDamage = FragTrap::getRange();
	this->ClapTrap::armorDamageReduction = FragTrap::getArmor();
	std::cout << this->ClapTrap::energyPoints << std::endl;
	std::cout << this->ClapTrap::hitPoints << std::endl;
	this->type = "SPR-TP ";
	std::cout << "OMG... Am I NINJ4-TP or FR4G-TP?" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SuperTrap died..." << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &other)
{
	this->ClapTrap::hitPoints = other.ClapTrap::hitPoints;
	this->ClapTrap::maxHitPoints = other.ClapTrap::maxHitPoints;
	this->ClapTrap::energyPoints = other.ClapTrap::energyPoints;
	this->ClapTrap::maxEnergyPoints = other.ClapTrap::maxEnergyPoints;
	this->level = other.level;
	this->name = other.name;
	this->ClapTrap::meleeAttackDamage = other.ClapTrap::meleeAttackDamage;
	this->ClapTrap::rangedAttackDamage = other.ClapTrap::rangedAttackDamage;
	this->ClapTrap::armorDamageReduction = other.ClapTrap::armorDamageReduction;
	this->type = other.type;
	std::cout << "Super copy..." << std::endl;
}

SuperTrap		&SuperTrap::operator=(const SuperTrap &other)
{
	if (this == &other)
		return(*this);
	this->ClapTrap::hitPoints = other.ClapTrap::hitPoints;
	this->ClapTrap::maxHitPoints = other.ClapTrap::maxHitPoints;
	this->ClapTrap::energyPoints = other.ClapTrap::energyPoints;
	this->ClapTrap::maxEnergyPoints = other.ClapTrap::maxEnergyPoints;
	this->level = other.level;
	this->name = other.name;
	this->ClapTrap::meleeAttackDamage = other.ClapTrap::meleeAttackDamage;
	this->ClapTrap::rangedAttackDamage = other.ClapTrap::rangedAttackDamage;
	this->ClapTrap::armorDamageReduction = other.ClapTrap::armorDamageReduction;
	this->type = other.type;
	std::cout << "Super copy..." << std::endl;
	return (*this);
}
