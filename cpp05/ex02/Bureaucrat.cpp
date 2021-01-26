/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 11:31:16 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/06 20:53:28 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("name")
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
	this->grade = grade;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : name(other.name)
{
	this->grade = other.grade;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this == &other)
		return (*this);
	this->grade = other.grade;
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("# Grade more");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("# Grade less");
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

void Bureaucrat::incGrade()
{
	if (this->grade - 1 < 1)
		throw GradeTooHighException();
	else
		this->grade--;
}

void Bureaucrat::decGrade()
{
	if (this->grade + 1 > 150)
		throw GradeTooLowException();
	else
		this->grade++;
}

std::ostream& operator<<(std::ostream &fout, Bureaucrat const &bureaucrat)
{
	fout << bureaucrat.getName() << ", bureaucrat grade: " << bureaucrat.getGrade() << std::endl;
	return (fout);
}

void Bureaucrat::signForm(Form &form) const
{
	try
	{
		if (form.getSign() == false)
		{
			form.beSigned(*this);
			std::cout << "Bureaucrat " << this->getName() << " signed form " << form.getName() << std::endl;
		}
		else
			std::cout << "Form " << form.getName() << " already signed" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Bureaucrat " << this->getName() << " can not sign form " << form.getName();
		std::cout << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << "Bureaucrat " << this->getName() << " executed form " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Bureaucrat " << this->getName() << " can not execute form " << form.getName();
		std::cout << " because " << e.what() << std::endl;
	}
	
	
}
