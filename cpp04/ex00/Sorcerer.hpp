/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 09:09:55 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/01 09:44:47 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string				name;
	std::string				title;

	Sorcerer(void);
public:
	Sorcerer(std::string name, std::string title);
	~Sorcerer(void);
	
	Sorcerer(const Sorcerer &other);
	Sorcerer				&operator=(const Sorcerer &other);

	void					polymorph(Victim const &victim) const;
	std::string				getName(void) const;
	std::string				getTitle(void) const;
};

std::ostream				&operator<<(std::ostream &fout, const Sorcerer &sorcerer);

#endif
