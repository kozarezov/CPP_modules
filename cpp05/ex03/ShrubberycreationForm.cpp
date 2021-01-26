/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberycreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:39:49 by ceccentr          #+#    #+#             */
/*   Updated: 2021/01/06 22:17:27 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137, "target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
    Form("ShrubberyCreationForm", 145, 137, target)
{   
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other):
    Form(other.getName(), other.getGradeSign(), other.getGradeExecute(), other.getTarget())
{    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
    (void)other;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    this->Form::execute(executor);
    std::ofstream file;
    try
    {
        file.open(this->getTarget() + "_shrubbery");
    }
    catch(const std::exception& e)
    {
        std::cerr << "can't open file, error: " << e.what() << '\n';
    }
    file << "                 ***          ***" << std::endl;
    file << "              ***....**     **...***" << std::endl;
    file << "             **........** **.......**" << std::endl;
    file << "      ***    **..........*.........**    ***" << std::endl;
    file << "   **.....**  **..................**  **.....**" << std::endl;
    file << " **.........**  **..............**  **.........**" << std::endl;
    file << "*..............*   *..........*   *..............*" << std::endl;
    file << " **..............*   *......*   *..............**" << std::endl;
    file << "   **..............** *....* **..............**" << std::endl;
    file << "     *......................................*" << std::endl;
    file << "   **..............**........**..............**" << std::endl;
    file << " **..............*    *....*    *..............**" << std::endl;
    file << "*..............*      *....*      *..............*" << std::endl;
    file << " **.........**        *....*        **.........**" << std::endl;
    file << "   **.....**         *....*           **.....**" << std::endl;
    file << "      ***          **....*               ***" << std::endl;
    file << "                 ** * * *" << std::endl;
    file.close();
}

ShrubberyCreationForm*  ShrubberyCreationForm::clone()
{
    ShrubberyCreationForm *temp;

    temp = new ShrubberyCreationForm(*this);
    return (temp);
}