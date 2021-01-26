/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:39:45 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/06 22:15:45 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <iostream>
# include <string>
# include <cstdlib>

class RobotomyRequestForm: public Form
{
private:
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();

	RobotomyRequestForm(RobotomyRequestForm const &other);
	RobotomyRequestForm& operator = (RobotomyRequestForm const &other);
	
	void 				execute(Bureaucrat const &executor) const;
	RobotomyRequestForm	*clone();
};

#endif
