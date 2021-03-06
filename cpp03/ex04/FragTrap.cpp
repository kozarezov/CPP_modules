/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 10:33:33 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/30 17:30:47 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	srand((unsigned) time(0));
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->name = "Default";
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->type = "FR4G-TP ";
	std::cout << "I am alive! I have a default name, please give me a name." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	srand((unsigned) time(0));
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->type = "FR4G-TP ";
	std::cout << "I am alive! I have a name: " << this->name << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "I'll be back..." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
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
	std::cout << "Did you clone me? Why?" << std::endl;
}

FragTrap		&FragTrap::operator=(const FragTrap &other)
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
	std::cout << "He's not equal me! Or equal?" << std::endl;
	return (*this);
}
	
void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int				nbr;
	std::string		guns[10] = {"Glock-18", "USP-S", "Five-SeveN", "Tec-9", "Desert Eagle", "Negev", "FAMAS", "Galil AR", "M4A1-S", "AK-47"};

	if (this->energyPoints < 25)
	{
		std::cout << "FR4G-TP ";
		std::cout << this->name;
		std::cout << " don't have enough energy.";
		std::cout << std::endl;
	}
	else
	{
		nbr = std::rand() % 10;
		std::cout << this->type;
		std::cout << this->name;
		std::cout << " take gun: ";
		std::cout << guns[nbr];
		std::cout << std::endl;
		this->rangedAttackDamage = nbr * 2 + 20;
		this->rangedAttack(target);
		this->energyPoints -= 25;
	}
}

void			FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP ";
	std::cout << this->name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << this->rangedAttackDamage;
	std::cout << " points of damage!";
	std::cout << std::endl;
}

int				FragTrap::getHP()
{
	return(this->hitPoints);
}

int				FragTrap::getMaxHP()
{
	return(this->maxHitPoints);
}

int				FragTrap::getRange()
{
	return(this->rangedAttackDamage);
}

int				FragTrap::getArmor()
{
	return(this->armorDamageReduction);
}
