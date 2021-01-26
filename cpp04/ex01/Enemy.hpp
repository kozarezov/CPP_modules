/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 12:17:02 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/03 10:52:33 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy
{
private:
	int					hp;
	std::string			type;

	Enemy(void);
public:
	Enemy(int hp, std::string const &type);
	virtual ~Enemy(void);
	
	Enemy(const Enemy &other);
	Enemy				&operator=(const Enemy &other);

	std::string const	getType(void) const;
	int					getHP(void) const;
	virtual void		takeDamage(int);
	void				setType(std::string const type);
	void				setHP(int hp);
};

#endif
