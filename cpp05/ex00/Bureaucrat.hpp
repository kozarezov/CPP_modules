/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 11:31:21 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/05 15:49:28 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <ostream>
# include <exception>

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;

	Bureaucrat();
public:
	Bureaucrat(std::string const name, int grade);
	~Bureaucrat();

	Bureaucrat(Bureaucrat const &other);
	Bureaucrat& operator=(Bureaucrat const &other);
	
	int					getGrade() const;
	std::string			getName() const;
	void				incGrade();
	void				decGrade();

	class GradeTooHighException: public std::exception
	{
		const char* what() const throw();
	};
	
	class GradeTooLowException: public std::exception
	{
		const char* what() const throw();
	};
};

std::ostream& operator << (std::ostream &fout, Bureaucrat const &bureaucrat);

#endif
