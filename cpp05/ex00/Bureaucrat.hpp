/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:15:01 by danevans          #+#    #+#             */
/*   Updated: 2024/11/05 13:32:46 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>


class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &to_copy);
		Bureaucrat& operator=(const Bureaucrat &other);
		void setName(const std::string name);
		void setGrade(const int grade);
		const std::string getName();
		int getGrade();
		void incrementGrade(const std::string &name);
		void decrementGrade(const std::string &name);
		~Bureaucrat();
		class GradeTooHighException;
		class GradeTooLowException;
	private:
		std::string _name;
		int	_grade;
};

class Bureaucrat::GradeTooHighException :  public std::exception {
	public:
		GradeTooHighException(const std::string &name);
		virtual const char* what() const throw();
		virtual ~GradeTooHighException() throw() {}
	private:
		std::string message;
};

class Bureaucrat::GradeTooLowException : public std::exception {
	public:
		GradeTooLowException(const std::string &name);
		virtual const char* what() const throw();
		virtual ~GradeTooLowException() throw() {}

	private:
		std::string message;
};

std::ostream &operator<<(std::ostream& os, Bureaucrat &bureaucrat);

#endif