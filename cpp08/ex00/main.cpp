/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 10:14:58 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/12 11:04:56 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	std::vector<int> test_1;

	try
	{
		std::cout << "Test_1: " << std::endl;
		std::vector<int>::iterator it = easyfind(test_1, 2);
		std::cout << *it << std::endl;
	}
	catch(const std::string& e)
	{
		std::cerr << e << '\n';
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Test_2: " << std::endl;
		test_1.push_back(1);
		test_1.push_back(2);
		test_1.push_back(3);
		test_1.push_back(4);
		test_1.push_back(5);
		std::vector<int>::iterator it = easyfind(test_1, 2);
		std::cout << *it << std::endl;
	}
	catch(const std::string& e)
	{
		std::cerr << e << '\n';
	}
}