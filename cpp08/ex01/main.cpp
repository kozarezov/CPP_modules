/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:36:16 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/14 10:55:05 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main(void)
{
	{
		std::cout << std::endl << "test_1: Subject test" << std::endl;
		try
		{
			Span sp = Span(5);

			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << std::endl << "test_2: Non number" << std::endl;
		try
		{
			Span test_2 = Span(5);

			std::cout << test_2.shortestSpan() << std::endl;
			std::cout << test_2.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << std::endl << "test_3: Full numbers" << std::endl;
		try
		{
			Span test_3 = Span(5);
			
			test_3.addNumber(1);
			test_3.addNumber(2);
			test_3.addNumber(3);
			test_3.addNumber(4);
			test_3.addNumber(5);
			test_3.addNumber(6);
			
			std::cout << test_3.shortestSpan() << std::endl;
			std::cout << test_3.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << std::endl << "test_4: 10k numbers" << std::endl;
		try
		{
			Span test_4 = Span(10000);
			std::vector<int> v;
			
			for (int i = 1; i <= 10000; i++)
				v.push_back(i);
			test_4.addNumbers(v.begin(), v.end());
			
			std::cout << test_4.shortestSpan() << std::endl;
			std::cout << test_4.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}