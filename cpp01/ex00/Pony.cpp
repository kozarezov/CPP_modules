/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:08:05 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/11 13:19:23 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

Pony::Pony(std::string name)
{
	this->name = name;
}

Pony::~Pony()
{
}

void	Pony::say_hello()
{
	std::cout << "Hello, my name is " << this->name << std::endl;
}

void	Pony::say_goodbye()
{
	std::cout << "Goodbye!" << std::endl;
}
