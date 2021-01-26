/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:08:18 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/10 17:21:09 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*little_pony;

	little_pony = new Pony("Pony on the Heap");
	little_pony->say_hello();
	little_pony->say_goodbye();
	delete little_pony;
}

void	ponyOnTheStack(void)
{
	Pony	little_pony("Pony on the Stack");

	little_pony.say_hello();
	little_pony.say_goodbye();

}

int		main(void)
{
	std::cout << "PonyOnTheHeap: " << std::endl;
	ponyOnTheHeap();
	std::cout << "PonyOnTheStack: " << std::endl;
	ponyOnTheStack();
	return (0);
}
