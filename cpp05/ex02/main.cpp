/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 15:05:51 by abobas            #+#    #+#             */
/*   Updated: 2021/01/06 20:57:07 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

int main()
{
	try
	{
		Bureaucrat Denis("Denis", 1);
		PresidentialPardonForm form_1("form_1");
		RobotomyRequestForm form_2("form_2");
		ShrubberyCreationForm form_3("form_3");
		std::cout << Denis << form_1 << form_2 << form_3;

		Denis.signForm(form_1);
		Denis.signForm(form_2);
		Denis.signForm(form_3);
		Denis.executeForm(form_1);
		Denis.executeForm(form_2);
		Denis.executeForm(form_3);

		std::cout << std::endl << std::endl;

		Bureaucrat Student("Student", 138);
		std::cout << Student << form_1 << form_2 << form_3;

		Student.executeForm(form_1);
		Student.executeForm(form_2);
		Student.executeForm(form_3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
