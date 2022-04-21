/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:11:33 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/21 18:11:35 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"

# define TREE  "                     . . .                                       \n\
                   .        .  .     ..    .                     \n\
                .                 .         .  .                 \n\
                                .                                \n\
                               .                ..               \n\
               .          .            .              .          \n\
               .            '.,        .               .         \n\
               .              'b      *                          \n\
                .              '$    #.                ..        \n\
               .    .           $:   #:               .          \n\
             ..      .  ..      *#  @):        .   . .           \n\
                          .     :@,@):   ,.**:'   .              \n\
              .      .,         :@@*: ..**'      .   .           \n\
                       '#o.    .:(@'.@*\"'  .                     \n\
               .  .       'bq,..:,@@*'   ,*      .  .            \n\
                          ,p$q8,:@)'  .p*'      .                \n\
                   .     '  . '@@Pp@@*'    .  .                  \n\
                    .  . ..    Y7'.'     .  .                    \n\
                              :@):.                              \n\
                             .:@:'.                              \n\
                           .::(@:.      -Olga_Kushnirova-        "

class ShrubberyCreationForm : public Form
{
	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		ShrubberyCreationForm & operator = (const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();

		virtual void		execute(Bureaucrat const & executor) const;
		std::string	getTarget(void) const;

	private:

		std::string	_target;
};

std::ostream& operator << (std::ostream &out, const ShrubberyCreationForm &myShrubberyCreationForm);

#endif



