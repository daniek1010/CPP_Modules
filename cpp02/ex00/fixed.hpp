/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:58:09 by danevans          #+#    #+#             */
/*   Updated: 2024/09/25 12:58:21 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed &to_copy);
		Fixed &operator=(const Fixed &other);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int		value;
		static const int bits = 8;

};

#endif