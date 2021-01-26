/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 14:53:05 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/15 10:39:47 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter()
{
}

Converter::Converter(std::string str)
{
	this->str = str;
	this->ld = strtod(str.c_str(), 0);
	if (errno)
		this->err = true;
}

Converter::~Converter()
{
}

float	Converter::ToFloat() const
{
	float flt;

	flt = static_cast<float>(this->ld);
	if (this->err)
		throw Converter::Impossible();
	if (isnan(flt))
		throw std::string("nanf");
	if (isinf(flt) && flt > 0)
		throw std::string ("+inff");
	if (isinf(flt) && flt < 0)
		throw std::string ("-inff");
	return (flt);
}

int		Converter::ToInt() const
{
	int nbr;

	if (this->err)
		throw Converter::Impossible();
	if (this->ld > INT32_MAX || this->ld < INT32_MIN || std::isnan(this->ld))
		throw Converter::Impossible();
	nbr = static_cast<int>(this->ld);
	return (nbr);
}

char	Converter::ToChar() const
{
	char ch;

	ch = static_cast<char>(this->ld);
	if (this->err)
		throw Converter::Impossible();
	if (ch < 0 || ch > 127)
		throw Converter::Impossible();
	else if (ch < 32 || ch > 126)
		throw Converter::NonDisplayable();
	return (ch);
}

double	Converter::ToDouble() const
{
	double dbl;

	dbl = static_cast<double>(this->ld);
	if (this->err)
		throw Converter::Impossible();
	if (isnan(this->ld))
		throw std::string("nan");
	if (isinf(this->ld) && dbl > 0)
		throw std::string ("+inf");
	if (isinf(this->ld) && dbl < 0)
		throw std::string ("-inf");
	return (dbl);
}

const char* Converter::Impossible::what() const throw()
{
	return ("impossible");
}

const char* Converter::NonDisplayable::what() const throw()
{
	return ("Non displayable");
}

std::ostream& operator<<(std::ostream &fout, Converter const &convert)
{	
	try
	{
		fout << "char: ";
		convert.ToChar();
		fout << "\'" << convert.ToChar() << "\'" << std::endl;
	}
	catch(const std::exception& e)
	{
		fout << e.what() << '\n';
	}
	try
	{
		fout << "int: ";
		fout << convert.ToInt() << std::endl;
	}
	catch(const std::exception& e)
	{
		fout << e.what() << '\n';
	}
	try
	{
		fout << "float: ";
		fout << std::fixed << std::setprecision(1) << convert.ToFloat() << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		fout << e.what() << '\n';
	}
	catch(const std::string& e)
	{
		fout << e << '\n';
	}
	try
	{
		fout << "double: ";
		fout << std::fixed << std::setprecision(1) << convert.ToDouble() << std::endl;
	}
	catch(const std::exception& e)
	{
		fout << e.what() << '\n';
	}
	catch(const std::string& e)
	{
		fout << e << '\n';
	}
	return (fout);
}