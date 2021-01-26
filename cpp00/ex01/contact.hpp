/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:36:13 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/07 16:58:29 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

# define YELLOW "\e[33m"
# define DEFAULT "\e[39m"
# define GREEN "\e[32m"
# define RED "\e[31m"

class Contact
{
private:
	int			index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	adress;
	std::string	email;
	std::string	phone;
	std::string	birthday;
	std::string	favorite_food;
	std::string	color_of_underwear;
	std::string	secret;
public:
	Contact();
	~Contact();
	void		display(void);
	void		take_information(int index);
	void		display_information(void);	
};

#endif