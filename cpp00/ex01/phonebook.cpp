/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:36:03 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/08 16:11:42 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Book::Book()
{
	this->count = 0;
}

Book::~Book()
{
}

void		Book::start_message(void)
{
	std::cout << YELLOW;
	std::cout << "# Enter command [ADD / SEARCH / EXIT]:" << std::endl;
	std::cout << DEFAULT;
}

void		Book::add_contact(void)
{
	if (this->count == 8)
		std::cout << RED << "# Phonebook is full !" << DEFAULT << std::endl;
	else
	{
		this->contacts[this->count].take_information(this->count + 1);
		this->count++;
	}
	this->start_message();
}

void		Book::header(void)
{
	std::cout << GREEN;
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->count; i++)
		this->contacts[i].display();
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << DEFAULT;

}

void		Book::search_contact(void)
{
	int		id;
	
	if (this->count == 0)
		std::cout << "# Add your first contact !" << std::endl;
	else
	{
		this->header();
		std::cout << "# Enter the contact number : ";
		if (!(std::cin >> id) || id <= 0 || id > this->count)
			std::cout << RED << "# Wrong contact number !" << DEFAULT << std::endl;
		else
			this->contacts[id - 1].display_information();
	}
	this->start_message();
}
