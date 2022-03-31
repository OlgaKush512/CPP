#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include <iostream>
# include <string>
# include <exception>

#include "Form.hpp"

# define TREE  "                     . . .                                       \
                   .        .  .     ..    .                     \
                .                 .         .  .                 \
                                .                                \
                               .                ..               \
               .          .            .              .          \
               .            '.,        .               .         \
               .              'b      *                          \
                .              '$    #.                ..        \
               .    .           $:   #:               .          \
             ..      .  ..      *#  @):        .   . .           \
                          .     :@,@):   ,.**:'   .              \
              .      .,         :@@*: ..**'      .   .           \
                       '#o.    .:(@'.@*\"'  .                     \
               .  .       'bq,..:,@@*'   ,*      .  .            \
                          ,p$q8,:@)'  .p*'      .                \
                   .     '  . '@@Pp@@*'    .  .                  \
                    .  . ..    Y7'.'     .  .                    \
                              :@):.                              \
                             .:@:'.                              \
                           .::(@:.      -Olga_Kushnirova-        "

class ShrubberyCreationForm : public Form
{
	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target, int gradeSign, int gradeExec);
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		ShrubberyCreationForm & operator = (const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();

		class GradeTooHighException : public std::exception
		{
			const char* what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char* what(void) const throw();
		};

		void		execute(Bureaucrat const & executor) const;

		std::string	getTarget(void) const;
		void		beSigned(const Bureaucrat &myBureaucrat);
		std::string	getName(void) const;
		int			getGradeSign(void) const;
		int			getGradeExec(void) const;
		bool		isSigned(void) const;

	private:

		const std::string	_target;

		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExec;

};

std::ostream& operator << (std::ostream &out, const ShrubberyCreationForm &myShrubberyCreationForm);

#endif



