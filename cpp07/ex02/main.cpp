/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 11:30:07 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/15 13:34:26 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int		main(void)
{
	{
		Array<int> test_1;
		
		std::cout << std::endl << "test_1 (empty int):" << std::endl;
		try
		{
			std::cout << "size: " << test_1.size() << std::endl;
			std::cout << "[1]: " << test_1[1] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl << "test_2 (full int):" << std::endl;
		try
		{
			Array <int> test_2(2);

			std::cout << "size: " << test_2.size() << std::endl;
			std::cout << "[1]: " << test_2[1] << std::endl;
			test_2[1] = 3;
			std::cout << "[1]: " << test_2[1] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		Array<std::string> test_3;
		
		std::cout << std::endl << "test_3 (empty string):" << std::endl;
		try
		{
			std::cout << "size: " << test_3.size() << std::endl;
			std::cout << "[1]: " << test_3[1] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl << "test_4 (full string):" << std::endl;
		try
		{
			Array <std::string> test_4(2);
			
			std::cout << "size: " << test_4.size() << std::endl;
			std::cout << "[1]: " << test_4[1] << std::endl;
			test_4[1] = "Test";
			std::cout << "[1]: " << test_4[1] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}