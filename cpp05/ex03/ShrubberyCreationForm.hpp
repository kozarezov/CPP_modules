/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:39:52 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/06 22:16:50 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <string>
# include <fstream>

class ShrubberyCreationForm: public Form
{
private:
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();

	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const &other);
	
	void 					execute(Bureaucrat const &executor) const;
	ShrubberyCreationForm	*clone();
};

#endif
