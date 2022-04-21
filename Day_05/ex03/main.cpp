/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:10:33 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/21 18:10:36 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern my_intern;

	Form *newForm;

	newForm = my_intern.makeForm("robotomy request", "Bender");

	if (newForm != NULL)
	{
		std::cout << *newForm << std::endl;
		try
		{
			Bureaucrat br("Michel", 10);
			std::cout << br;
			
			br.signForm(*newForm);
			br.signForm(*newForm);
			br.executeForm(*newForm);
		}
		catch(std::exception & e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
		delete (newForm);
	}
	return (0);
}
