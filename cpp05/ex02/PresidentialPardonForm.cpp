/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:42:20 by danevans          #+#    #+#             */
/*   Updated: 2024/11/05 16:30:24 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string &target) : AForm(target, 25, 5), _target(target) {
	
}

PresidentialPardonForm::~PresidentialPardonForm() {
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &to_copy) {

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
		
}