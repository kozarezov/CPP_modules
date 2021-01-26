/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 02:48:03 by lmartin           #+#    #+#             */
/*   Updated: 2021/01/14 15:26:36 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <string>
# include <deque>

template<class T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() 
	{
	};
	~MutantStack() 
	{
	};
	
	MutantStack(const MutantStack &other)
	{
		*this = other;
	};
	MutantStack		&operator=(const MutantStack &other)
	{
		if (this == &other)
			return (*this);
		std::stack<T>::operator=(other);
		return (*this);
	};

	typedef typename std::stack<T>::container_type container_type;
	typedef typename container_type::iterator iterator;

	iterator		begin()
	{
		return (this->c.begin());
	};
	iterator		end()
	{
		return (this->c.end());
	};
};

#endif
