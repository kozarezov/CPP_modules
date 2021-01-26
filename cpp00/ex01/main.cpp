/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:36:17 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/08 16:08:26 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int				main(void)
{
	std::string	command;
	Book		phonebook;

	phonebook.start_message();
	while (!std::cin.eof())
	{
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command == "EXIT")
		{
			std::cout << GREEN << "# Good Bye!" << DEFAULT << std::endl;
			break ;
		}
	}
	return (0);
}