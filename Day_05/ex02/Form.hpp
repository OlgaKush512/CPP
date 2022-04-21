/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:12:53 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/21 18:12:55 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <fstream>
# include <sstream>
# include <cstdlib>

#include "Bureaucrat.hpp"

class Form
{
	public:

		Form(std::string name, int gradeSign, int gradeExec);
		Form(Form const &other);
		Form & operator = (const Form &other);
		virtual ~Form();

		class GradeTooHighException : public std::exception
		{
			virtual const char* what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char* what(void) const throw();
		};

		class SignedBeforeException : public std::exception
		{
			virtual const char* what(void) const throw();
		};

		class NotSignedYetException : public std::exception
		{
			virtual const char* what(void) const throw();
		};

		virtual void	execute(Bureaucrat const & executor) const = 0;

		void		beSigned(const Bureaucrat &myBureaucrat);
		std::string			getName(void) const;
		int			getGradeSign(void) const;
		int			getGradeExec(void) const;
		bool		isSigned(void) const;
		


	private:

		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExec;

		Form(void);

};

std::ostream& operator << (std::ostream &out, const Form &myForm);

#endif
