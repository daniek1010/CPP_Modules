#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed{
	public:
		Fixed(void);
		Fixed(const Fixed &to_copy);
		Fixed &operator=(const Fixed &other);
		~Fixed(void);
		Fixed(const int intValue);
		Fixed(const float floatValue);
		bool operator>(const Fixed &nbr) const;
		bool operator<(const Fixed &nbr) const;
		bool operator>=(const Fixed &nbr) const ;
		bool operator<=(const Fixed &nbr) const;
		bool operator==(const Fixed &nbr) const;
		bool operator!=(const Fixed &nbr) const;
		Fixed operator+(const Fixed &nbr) const;
		Fixed operator-(const Fixed &nbr) const;
		Fixed operator*(const Fixed &nbr) const;
		Fixed operator/(const Fixed &nbr) const;
		Fixed &operator--(void);
		Fixed operator--(int);
		Fixed &operator++(void);
		Fixed operator++(int);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
	
	private:
		int		value;
		static const int bits = 8;

};

std::ostream &operator<<(std::ostream &stream, const Fixed &nbr);

#endif