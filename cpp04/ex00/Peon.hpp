/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 09:10:24 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/01 10:15:51 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon: public Victim
{
private:
	Peon(void);
public:
	Peon(std::string name);
	~Peon(void);

	Peon(const Peon &other);
	Peon &operator=(const Peon &other);
};

#endif
