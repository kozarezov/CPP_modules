/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 21:04:52 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/06 21:28:09 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{   
}

Intern::~Intern()
{
	for (int i = 0; i < 3; i++)
	{
		if (this->forms[i])
			delete this->forms[i];
	}
}

Intern::Intern(Intern const &other)
{
	for (int i = 0; i < 3; i++)
	{
		this->forms[i] = other.forms[i]->clone();
		delete (other.forms[i]);
	}
}

Intern& Intern::operator=(Intern const &other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < 3; i++)
		this->forms[i] = other.forms[i]->clone();
	return (*this);
}

const char* Intern::NoForm::what() const throw()
{
	return ("# Can`t find form");
}

Form* Intern::makeForm(std::string name, std::string target)
{
	Form	*temp;
	
	this->forms[0] = new PresidentialPardonForm(target);
	this->forms[1] = new ShrubberyCreationForm(target);
	this->forms[2] = new RobotomyRequestForm(target);
	for (int i = 0; i < 3; i++)
	{
		if (forms[i]->getName() == name)
		{
			std::cout << "Intern creates form " << name << std::endl;
			temp = forms[i]->clone();
			return (temp);
		}
	}
	throw Intern::NoForm();
}
