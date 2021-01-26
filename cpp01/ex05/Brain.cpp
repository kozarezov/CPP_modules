/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:05:52 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/15 15:27:54 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	const long adr = (long)this;

	std::stringstream adr_ss;
	adr_ss << "0x" << std::uppercase << std::hex << adr;
	this->address = adr_ss.str();
}

Brain::~Brain()
{
}

std::string	Brain::identify() const
{
	return (this->address);
}