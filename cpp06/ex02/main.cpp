/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 17:57:39 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/10 18:44:37 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

void identify_from_reference( Base & p)
{
	std::cout << "Identify from reference. This class: ";
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		try
		{
			B& b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::bad_cast& e)
		{
			try
			{
				C& c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch(const std::bad_cast& e)
			{
				std::cout << "Another" << std::endl;
			}
		}
	}
}

void identify_from_pointer(Base * p)
{
	std::cout << "Identify from pointer. This class: ";
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Another" << std::endl;
}

Base * generate(void)
{
	int	i;

	i = rand() % 3;
	std::cout << "Generate random class: ";
	if (i == 1)
	{
		std::cout << "A" << std::endl;
		return (new A);
	}
	else if (i == 2)
	{
		std::cout << "B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "C" << std::endl;
		return (new C);
	}
}

int		main(void)
{
	srand(time(0));
	Base *test_1 = generate();
	Base *test_2 = generate();

	identify_from_pointer(test_1);
	identify_from_reference(*test_1);
	identify_from_pointer(test_2);
	identify_from_reference(*test_2);

	delete test_1;
	delete test_2;
	return (0);
}
