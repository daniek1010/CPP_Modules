/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:47:23 by danevans          #+#    #+#             */
/*   Updated: 2024/11/11 12:04:50 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	public:
		AForm	(void);
		AForm	(std::string name, int signGrade, int execGrade);
		AForm	(const AForm &to_copy);
		AForm	&operator=(const AForm &other);
		void	beSigned(Bureaucrat &bureaucrat);
		void	signForm(Bureaucrat &bureaucrat);
		bool	getSignStatus() const;
		int		getSignGrade() const;
		int		getExecGrade() const;
		std::string	getName() const;
		virtual void execute(Bureaucrat const & executor) const = 0;
		virtual ~AForm();
		class GradeTooHighException;
		class GradeTooLowException;
		class NotSignedException;
		class FailureException;
	private:
		std::string _name;
		int		_signGrade;
		int		_execGrade;
		bool	_signStatus;
};

class AForm::GradeTooHighException :  public std::exception {
	public:
		GradeTooHighException(const std::string &name);
		virtual const char* what() const throw();
		virtual ~GradeTooHighException() throw() {}
	private:
		std::string message;
};

class AForm::GradeTooLowException : public std::exception {
	public:
		GradeTooLowException(const std::string &name, const std::string &form);
		virtual const char* what() const throw();
		virtual ~GradeTooLowException() throw() {}

	private:
		std::string message;
};

class AForm::NotSignedException : public std::exception {
	public:
		NotSignedException(const std::string &name);
		virtual const char* what() const throw();
		virtual ~NotSignedException() throw() {}

	private:
		std::string message;
};

class AForm::FailureException : public std::exception {
	public:
		FailureException(const std::string &name, const std::string &str);
		virtual const char* what() const throw();
		virtual ~FailureException() throw() {}

	private:
		std::string message;
};

std::ostream &operator<<(std::ostream& os, AForm &form);

#endif