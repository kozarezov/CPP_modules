/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 13:24:36 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/10 13:27:54 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{
}

B::~B()
{
}

B::B(const B &other)
{
	*this = other;
}

B &B::operator=(const B &other)
{
	(void)other;
	return (*this);
}