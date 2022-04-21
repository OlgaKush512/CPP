/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:11:13 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/21 18:11:15 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:

		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		RobotomyRequestForm & operator = (const RobotomyRequestForm &other);
		~RobotomyRequestForm();

		class RobotomyFailedException : public std::exception
		{
			virtual const char* what(void) const throw();
		};

		virtual void		execute(Bureaucrat const & executor) const;
		std::string	getTarget(void) const;

	private:

		std::string	_target;
};

std::ostream& operator << (std::ostream &out, const RobotomyRequestForm &myRobotomyRequestForm);

#endif
