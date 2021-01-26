/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 11:13:44 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/11 11:26:53 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
# include <iomanip>

template <class T>
void	matrix(T& ch)
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::setw(7) << ch << " ";
	}
	std::cout << std::endl;
}

template <class T>
void	iter(T* address, int length, void (*func)(T&))
{
	for (int i = 0; i < length; i++)
	{
		try
		{	
			(*func)(address[i]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
}

#endif