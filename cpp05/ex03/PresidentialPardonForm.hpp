/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:39:37 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/06 22:14:22 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class PresidentialPardonForm: public Form
{
private:
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();

	PresidentialPardonForm(PresidentialPardonForm const &other);
	PresidentialPardonForm& operator=(PresidentialPardonForm const &other);
		
	void					execute(Bureaucrat const &executor) const;
	PresidentialPardonForm	*clone();
};

#endif
