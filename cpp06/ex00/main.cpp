/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 14:53:25 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/09 15:51:30 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int		main(int argc, char **argv)
{
	std::string str;
	
	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	str = argv[1];
	Converter convert(str);
	std::cout << convert;

	return (EXIT_SUCCESS);
}