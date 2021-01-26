/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 15:05:51 by abobas            #+#    #+#             */
/*   Updated: 2021/01/05 17:36:28 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

int main()
{
	{
		try
		{
			Form test_1("test_1", -1, 100);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Form test_2("test_2", 100, 151);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat Denis("Denis", 15);
			Form document("document", 10, 10);
			std::cout << Denis << document;
			for (int i = 0; i < 5; i++)
			{
				Denis.incGrade();
				std::cout << Denis;
				Denis.signForm(document);
			}
			std::cout << std::endl;
			document.beSigned(Denis);
			std::cout << Denis << document;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
