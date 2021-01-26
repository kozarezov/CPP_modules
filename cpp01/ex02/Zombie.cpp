/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 10:10:26 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/12 10:11:29 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

Zombie::~Zombie(void)
{
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")>";
	std::cout << " Braiiiiiiinnnssss..." << std::endl;
}
