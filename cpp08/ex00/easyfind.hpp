/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 10:14:45 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/13 15:31:11 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <exception>
# include <vector>
# include <iterator>

template <typename T>
typename T::iterator easyfind (T& array, int nbr)
{
	for (typename T::iterator it = array.begin(); it != array.end(); it++)
	{
		if (*it == nbr)
			return (it);
	}
	throw (std::string("It can`t be found"));
}

#endif