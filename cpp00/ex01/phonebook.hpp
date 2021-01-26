/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:36:07 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/07 16:58:31 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "contact.hpp"

# define YELLOW "\e[33m"
# define DEFAULT "\e[39m"
# define GREEN "\e[32m"
# define RED "\e[31m"

class Book
{
private:
	Contact		contacts[8];
	int			count;
public:
	Book();
	~Book();
	void		add_contact(void);
	void		search_contact(void);
	void		header(void);
	void		start_message(void);
};

#endif