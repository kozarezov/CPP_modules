/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:34:13 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/08 16:17:15 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void		Contact::display_information(void)
{
	std::cout << "First Name : ";
	std::cout << this->first_name << std::endl;
	std::cout << "Last Name : ";
	std::cout << this->last_name << std::endl;
	std::cout << "NickName : ";
	std::cout << this->nickname << std::endl;
	std::cout << "Login : ";
	std::cout << this->login << std::endl;
	std::cout << "Email : ";
	std::cout << this->email << std::endl;
	std::cout << "Phone : ";
	std::cout << this->phone << std::endl;
	std::cout << "Birthday : ";
	std::cout << this->birthday << std::endl;
	std::cout << "Favorite food : ";
	std::cout << this->favorite_food << std::endl;
	std::cout << "Color of underwear : ";
	std::cout << this->color_of_underwear << std::endl;
	std::cout << "Secret : ";
	std::cout << this->secret << std::endl;
}

void		Contact::take_information(int index)
{	
	this->index = index;
	std::cout << "First Name : ";
	std::getline(std::cin, first_name);
	std::cout << "Last Name : ";
	std::getline(std::cin, last_name);
	std::cout << "NickName : ";
	std::getline(std::cin, nickname);
	std::cout << "Login : ";
	std::getline(std::cin, login);
	std::cout << "Email : ";
	std::getline(std::cin, email);
	std::cout << "Phone : ";
	std::getline(std::cin, phone);
	std::cout << "Birthday : ";
	std::getline(std::cin, birthday);
	std::cout << "Favorite food : ";
	std::getline(std::cin, favorite_food);
	std::cout << "Color of underwear : ";
	std::getline(std::cin, color_of_underwear);
	std::cout << "Secret : ";
	std::getline(std::cin, secret);
}

void		print_space(int len)
{
	len = 10 - len;
	std::cout << "|";
	for (int i = 0; i < len; i++)
		std::cout << " ";
}

void		print_str(std::string str)
{
	int		len;

	len = str.size();
	print_space(len);
	if (len < 10)
		for (int i = 0; i < len; i++)
			std::cout << str[i];
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
}

void		Contact::display(void)
{
	print_space(1);
	std::cout << this->index;
	print_str(this->first_name);
	print_str(this->last_name);
	print_str(this->nickname);
	std::cout << "|" << std::endl;
}
