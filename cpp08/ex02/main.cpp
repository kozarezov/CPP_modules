/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 15:07:34 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/15 16:21:22 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int			main(void)
{
	{
		MutantStack<int> mstack;
	
		mstack.push(5);
		mstack.push(17);
		
		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		MutantStack<std::string> test_2;

		test_2.push("This");
		test_2.push("is");
		test_2.push("the");
		test_2.push("end");

		for (MutantStack<std::string>::iterator it = test_2.begin(); it != test_2.end(); it++)
		{
			std::cout << *it << " ";
		}
		std::cout << std::endl;
	}
}
