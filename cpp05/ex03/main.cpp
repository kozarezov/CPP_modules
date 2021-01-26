/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 15:05:51 by abobas            #+#    #+#             */
/*   Updated: 2021/01/06 22:33:15 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

int main()
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
	
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat Denis("Denis", 1);
	
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
		std::cout << Denis << *rrf;
		Denis.signForm(*rrf);
		Denis.executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
