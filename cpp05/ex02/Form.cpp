/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:39:08 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/06 20:54:08 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("name"), grade_by_sign(1), grade_by_execute(1)
{
}

Form::Form(std::string name, int grade_by_sign, int grade_by_execute) : 
	name(name), grade_by_sign(grade_by_sign), grade_by_execute(grade_by_execute)
{
	this->sign = false;
	if (this->grade_by_sign < 1 || this->grade_by_execute < 1)
		throw Form::GradeTooHighException();
	if (this->grade_by_sign > 150 || this->grade_by_execute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(std::string name, int grade_by_sign, int grade_by_execute, std::string target) : 
	name(name), grade_by_sign(grade_by_sign), grade_by_execute(grade_by_execute), target(target)
{
	this->sign = false;
	if (this->grade_by_sign < 1 || this->grade_by_execute < 1)
		throw Form::GradeTooHighException();
	if (this->grade_by_sign > 150 || this->grade_by_execute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form::Form(Form const &other) : 
	name(other.name), grade_by_sign(other.grade_by_sign), grade_by_execute(other.grade_by_execute)
{
	this->sign = other.sign;
	if (this->grade_by_sign < 1 || this->grade_by_execute < 1)
		throw Form::GradeTooHighException();
	if (this->grade_by_sign > 150 || this->grade_by_execute > 150)
		throw Form::GradeTooLowException();
}

Form& Form::operator=(Form const &other)
{
	if (this == &other)
		return (*this);
	this->sign = other.sign;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("# Grade more");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("# Grade less");
}

const char* Form::NotSignedException::what() const throw()
{
	return ("# Is not signed");
}

bool Form::getSign() const
{
	return (this->sign);
}

std::string Form::getName() const
{
	return (this->name);
}

int Form::getGradeSign() const
{
	return (this->grade_by_sign);
}

int Form::getGradeExecute() const
{
	return (this->grade_by_execute);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (this->getGradeSign() < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	else
		this->sign = true;
}

std::ostream& operator<<(std::ostream &fout, Form const &form)
{
	fout << "Form: " << form.getName() << std::endl;
	fout << "Grade to be signed: " << form.getGradeSign() << std::endl;
	fout << "Grade to be execute: " << form.getGradeExecute() << std::endl;
	if (form.getSign() == true)
		fout << " - signed" << std::endl;
	else
		fout << " - not signed" << std::endl;
	fout << std::endl;
	return (fout);
}

std::string			Form::getTarget() const
{
	return (this->target);
}

void		Form::execute(Bureaucrat const &executor) const
{
	if (this->getSign() == false)
		throw Form::NotSignedException();
	if (this->getGradeExecute() < executor.getGrade())
		throw Form::GradeTooLowException();
}