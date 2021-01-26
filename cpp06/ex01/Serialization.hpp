/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 11:49:16 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/10 11:54:43 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <cstdlib>
# include <string>

struct Data 
{
	std::string	s1;
	int			n;
	std::string	s2;
};

void * serialize(void);
Data * deserialize(void * raw);

#endif