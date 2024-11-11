/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:47:23 by danevans          #+#    #+#             */
/*   Updated: 2024/11/05 13:50:46 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form {
	public:
		Form	(void);
		Form	(std::string name, int signGrade, int execGrade);
		Form	(const Form &to_copy);
		Form	&operator=(const Form &other);
		void	beSigned(Bureaucrat &bureaucrat);
		void	signForm(Bureaucrat &bureaucrat);
		bool	getSignStatus() const;
		int		getSignGrade() const;
		int		getExecGrade() const;
		std::string	getName() const;
		~Form();
		class GradeTooHighException;
		class GradeTooLowException;
	private:
		std::string _name;
		int		_signGrade;
		int		_execGrade;
		bool	_signStatus;
};

class Form::GradeTooHighException :  public std::exception {
	public:
		GradeTooHighException(const std::string &name);
		virtual const char* what() const throw();
		virtual ~GradeTooHighException() throw() {}
	private:
		std::string message;
};

class Form::GradeTooLowException : public std::exception {
	public:
		GradeTooLowException(const std::string &name);
		virtual const char* what() const throw();
		virtual ~GradeTooLowException() throw() {}

	private:
		std::string message;
};

std::ostream &operator<<(std::ostream& os, Form &form);

#endif