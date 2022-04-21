/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:08:47 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/21 18:08:50 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:

		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		PresidentialPardonForm & operator = (const PresidentialPardonForm &other);
		~PresidentialPardonForm();

		virtual void		execute(Bureaucrat const & executor) const;
		std::string			getTarget(void) const;

	private:

		std::string	_target;
};

std::ostream& operator << (std::ostream &out, const PresidentialPardonForm &myPresidentialPardonForm);

#endif
