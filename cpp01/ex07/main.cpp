/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:13:34 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/17 14:22:48 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int			main(int argc, char *argv[])
{
	std::string	str1;
	std::string	str2;
	std::string filename;

	if (argc != 4)
	{
		std::cout << "# Error: Wrong namber of argument" << std::endl;
		return (1);
	}
	str1 = std::string(argv[2]);
	str2 = std::string(argv[3]);
	if (!str1.length() || !str2.length())
	{
		std::cerr << "# Error: Empty string" << std::endl;
		return (1);
	}
	filename = std::string(argv[1]);
	return (ft_replace(filename, str1, str2));
}