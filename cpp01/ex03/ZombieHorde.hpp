/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 10:22:43 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/14 11:48:30 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <iostream>
# include <string>
# include <cstdlib>

class	ZombieHorde
{
private:
	std::string	type;
	int			N;
	Zombie		*zombies;
public:
	ZombieHorde(int N);
	~ZombieHorde();

	void	all_announce(void);
	void	random_name(Zombie& new_zombie);
};

#endif