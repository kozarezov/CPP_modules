/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 11:49:12 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/10 12:51:08 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int		main(void)
{
	void	*test_1 = serialize();
	Data	*test_2 = deserialize(test_1);

	delete reinterpret_cast<char *>(test_1);
	delete test_2;
	return (0);
}
