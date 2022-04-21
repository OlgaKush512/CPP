/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:08:32 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/21 18:08:34 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat br("Michel", 10);
		std::cout << br;
		try
		{
			ShrubberyCreationForm Sh("Your_Dreams");
			PresidentialPardonForm Pr("Mr. Brown");
			RobotomyRequestForm Rb("Mon_Beateau");

			std::cout << std::endl << "Before actions" << std::endl << std::endl;

			std::cout << Sh << std::endl;
			std::cout << Pr << std::endl;
			std::cout << Rb << std::endl;

			std::cout << Sh.getName() << std::endl << std::endl;

			br.signForm(Sh);
			br.signForm(Sh);
			br.executeForm(Sh);

			std::cout << std::endl << Pr.getName() << std::endl << std::endl;

			br.signForm(Pr);
			br.signForm(Pr);
			br.executeForm(Pr);

			std::cout << std::endl << Rb.getName() << std::endl << std::endl;

			br.signForm(Rb);
			br.signForm(Rb);
			br.executeForm(Rb);

			std::cout << std::endl << "After actions" << std::endl << std::endl;

			std::cout << Sh << std::endl;
			std::cout << Pr << std::endl;
			std::cout << Rb << std::endl;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return (0);
}
