/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 09:57:38 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/11 11:20:39 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main(void)
{
	char 		test_1[15] = "This is MATRIX";
	int			test_2[5] = {1, 0, 2, 1, 0};
	std::string test_3[3] = {"Morfius", "Neo", "Trinity"};


	::iter(test_1, 14, ::matrix);
	std::cout << std::endl;
	::iter(test_2, 5, ::matrix);
	std::cout << std::endl;
	::iter(test_3, 3, ::matrix);
	std::cout << std::endl;

	return (0);
}