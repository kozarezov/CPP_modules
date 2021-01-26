/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 11:31:26 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/05 14:52:46 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

int main()
{
	std::cout << "Test_1:" << std::endl;
	try
	{
		Bureaucrat Test_1("Test_1", 1);
		std::cout << Test_1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Test_2:" << std::endl;
	try
	{
		Bureaucrat Test_2("Test_2", 0);
		std::cout << Test_2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "Test_3:" << std::endl;
	try
	{
		Bureaucrat Test_3("Test_3", 151);
		std::cout << Test_3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "Test_4:" << std::endl;
	try
	{
		Bureaucrat Test_4("Test_4", 15);
		for (size_t i = 0; i < 16; i++)
		{
			Test_4.incGrade();
			std::cout << Test_4;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Test_5:" << std::endl;
	try
	{
		Bureaucrat Test_5("Test_5", 145);
		for (size_t i = 0; i < 16; i++)
		{
			Test_5.decGrade();
			std::cout << Test_5;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
