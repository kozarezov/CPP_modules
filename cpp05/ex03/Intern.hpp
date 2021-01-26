/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 21:04:57 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/06 21:07:50 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include <string>
# include <iostream>
# include <exception>
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
private:
   Form *forms[3];
public:
	Intern();
	~Intern();

	Intern(Intern const &other);
	Intern& operator=(Intern const &other);

	class NoForm: public std::exception
	{
		const char* what() const throw();
	};
	Form* makeForm(std::string name, std::string target);
};

#endif
