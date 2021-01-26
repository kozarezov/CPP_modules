/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:19:45 by ceccentr          #+#    #+#             */
/*   Updated: 2020/12/17 15:36:48 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string	ft_swap(std::string& line, std::string str1, std::string str2)
{
	std::stringstream ss;
	int	len;
	int	i;

	len = str1.length();
	for (int j = 0; j < line.length(); j++)
	{
		i = 0;
		while (line[i + j] == str1[i] && i < len)
			i++;
		if (i == len)
		{
			ss << str2;
			j += (i - 1);
		}
		else
			ss << line[j];
	}
	return (ss.str());
}

int		ft_replace(std::string filename, std::string str1, std::string str2)
{
	std::ofstream	fout;
	std::ifstream	fin;
	std::string		line;
	
	fin.open(filename);
	if (!fin)
	{
		std::cerr << "# Error: Can't open filename" << std::endl;
		return (1);	
	}
	fout.open(filename + ".copy");
	if (!fout)
	{
		std::cerr << "Error: Can't open copy filename" << std::endl;
		return (1);
	}
	while (getline(fin, line))
	{
		fout << ft_swap(line, str1, str2);
		if (!fin.eof())
			fout << '\n';
	}
	fout.close();
	fin.close();
	return (0);
}