/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 11:05:08 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/11 11:12:33 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <class T>
void 	swap(T& arg1, T& arg2)
{
	T	tmp;
	
	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template <class T>
T&		min(T& arg1, T& arg2)
{
	if (arg1 < arg2)
		return (arg1);
	else
		return (arg2);
}

template <class T>
T&		max(T& arg1, T& arg2)
{
	if (arg1 > arg2)
		return (arg1);
	else
		return (arg2);
}

#endif