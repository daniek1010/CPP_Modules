/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:29:08 by danevans          #+#    #+#             */
/*   Updated: 2024/11/11 15:32:38 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

class Intern {
	public:
		Intern(void);
		Intern(const Intern &to_copy);
		Intern &operator=(const Intern &other);
		~Intern();
		AForm *makeForm(const std::string &form_obj, const std::string &target);
		class wrongFormException;
};

class Intern::wrongFormException : public std::exception {
	public:
		wrongFormException(const std::string &form);
		virtual const char* what() const throw();
		virtual ~wrongFormException() throw() {}
	private:
		std::string message;
};


#endif