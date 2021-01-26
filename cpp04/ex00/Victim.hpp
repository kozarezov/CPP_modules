/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 09:10:08 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/01 09:59:23 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
protected:
	std::string name;
	std::string	type;

	Victim(void);
public:
	Victim(std::string name);
	virtual ~Victim(void);
	
	Victim(const Victim &other);
	Victim		&operator=(const Victim &other);

	void		getPolymorphed(void) const;
	std::string	getName(void) const;	
};

std::ostream	&operator<<(std::ostream &fout, const Victim &victim);

#endif
