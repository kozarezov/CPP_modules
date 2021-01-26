/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:39:41 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/06 22:16:23 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45, "target")
{
	std::srand((unsigned) time(0));
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45, target)
{   
	std::srand((unsigned) time(0));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other):
	Form(other.getName(), other.getGradeSign(), other.getGradeExecute(), other.getTarget())
{    
	std::srand((unsigned) time(0));
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	(void)other;
	std::srand((unsigned) time(0));
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	this->Form::execute(executor);
	std::cout << "br..brrrr...brr...brrrrrr..." << std::endl;
	std::cout << this->getTarget();
	if (rand() % 2 == 1)
		std::cout << " has been robotomized unsuccessfully!" << std::endl;
	else
		std::cout << " has been robotomized successfully!" << std::endl;
}

RobotomyRequestForm* RobotomyRequestForm::clone()
{
	RobotomyRequestForm *temp;

	temp = new RobotomyRequestForm(*this);
	return (temp);
}
