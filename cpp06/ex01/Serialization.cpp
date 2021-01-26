/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 11:49:14 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/10 12:52:38 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

void * serialize(void)
{
	char	*str = new char[20];
	int		nbr;

	srand(time(0));
	std::string alphabet = "aAbBcCdDeEfFgGhHjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	std::cout << "# Serialize: " << std::endl;
	std::cout << "# Step1 - 8 random char: ";
	for (int i = 0; i < 8; i++)
	{
		str[i] = alphabet[rand() % 52];
		std::cout << str[i];
	}
	std::cout << std::endl;
	nbr = rand() % 1000;
	std::cout << "# Step2 - 1 random int: " << nbr << std::endl;
	*reinterpret_cast<int *>(&str[8]) = nbr;
	std::cout << "# Step3 - 8 random char: ";
	for (int i = 12; i < 20; i++)
	{
		str[i] = alphabet[rand() % 52];
		std::cout << str[i];
	}
	std::cout << std::endl;
	return (reinterpret_cast<void *>(str));
}

Data * deserialize(void * raw)
{
	Data	*data = new Data;
	char	*tmp = reinterpret_cast<char *>(raw);

	std::cout << "# Deserialize: " << std::endl;
	data->s1 = std::string(tmp, 8);
	std::cout << "# Step1 - Data->s1: " << data->s1 << std::endl;
	data->n = *reinterpret_cast<int*>(&tmp[8]);
	std::cout << "# Step2 - Data->n: " << data->n << std::endl;
	data->s2 = std::string(&tmp[12], 8);
	std::cout << "# Step3 - Data->s2: " << data->s2 << std::endl;

	return (data);
}
