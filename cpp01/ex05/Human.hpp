/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:27:48 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/15 15:29:10 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include "Brain.hpp"

class Human
{
private:
	Brain my_brain;
public:
	Human();
	~Human();

	const Brain	getBrain();
	std::string	identify();
};

#endif