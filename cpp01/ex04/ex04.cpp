/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 13:49:27 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/15 13:54:39 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*pointer = &str;
	std::string	&reference = str;
	std::cout << "# str: " << str << std::endl;
	std::cout << "# pointer: " << *pointer << std::endl;
	std::cout << "# reference: " << reference << std::endl;
	return (0);
}