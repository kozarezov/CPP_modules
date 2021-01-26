/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:39:12 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/05 19:05:01 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <exception>
# include <iostream>
# include <ostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	bool				sign;
	const std::string	name;
	const int			grade_by_sign;
	const int			grade_by_execute;

	Form();
public:
	Form(std::string name, int grade_by_sign, int grade_by_execute);
	~Form();

	Form(Form const &other);
	Form& operator=(Form const &other);

	bool				getSign() const;
	std::string			getName() const;
	int					getGradeSign() const;
	int					getGradeExecute() const;
	void				beSigned(Bureaucrat const &bureaucrat);

	class GradeTooHighException: public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char* what() const throw();
	};
};

std::ostream& operator << (std::ostream &fout, Form const &form);

#endif
