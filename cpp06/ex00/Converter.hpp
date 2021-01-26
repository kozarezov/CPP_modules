/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 14:53:23 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/15 10:21:27 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <ostream>
# include <exception>
# include <cstdlib>
# include <iomanip>

class Converter
{
private:
	std::string	str;
	long double	ld;
	bool		err;		

	Converter();
public:
	Converter(std::string str);
	~Converter();

	Converter(Converter const &other);
	Converter& operator=(Converter const &other);

	float		ToFloat() const;
	char		ToChar() const;
	int			ToInt() const;
	double		ToDouble() const;

	class Impossible: public std::exception
	{
		const char* what() const throw();
	};
	class NonDisplayable: public std::exception
	{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream &fout, Converter const &convert);

#endif
