/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:36:23 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/14 10:38:55 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <exception>
# include <vector>
# include <algorithm>
# include <iterator>

class Span
{
private:
	std::vector<int>	nbrs;
	unsigned int		N;

	Span();
public:
	Span(unsigned int N);
	~Span();

	Span(Span const &other);
	Span & operator=(Span const &other);

	void				addNumber(int nbr);
	int					shortestSpan(void);
	int					longestSpan(void);
	void				addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	class AddException : public std::exception
	{
		const char* what() const throw();
	};
	class NoFoundException : public std::exception
	{
		const char* what() const throw();
	};
};

#endif