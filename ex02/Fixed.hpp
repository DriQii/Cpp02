#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed{

public :

	Fixed();
	Fixed(const Fixed &copy);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();

	Fixed& operator=(const Fixed &ref);
	bool operator<(const Fixed &ref);
	bool operator>(const Fixed &ref);
	bool operator<=(const Fixed &ref);
	bool operator>=(const Fixed &ref);
	bool operator!=(const Fixed &ref);
	bool operator==(const Fixed &ref);
	Fixed operator+(const Fixed &ref);
	Fixed operator-(const Fixed &ref);
	Fixed operator*(const Fixed &ref);
	Fixed operator/(const Fixed &ref);
	Fixed operator++();
	Fixed operator++(int n);
	Fixed operator--();
	Fixed operator--(int n);

	int getRawBits(void) const;
	void setRawBits( int const raw );

	int		toInt(void) const;
	float	toFloat(void) const;
	static Fixed		min(Fixed &a, Fixed &b);
	static Fixed		min(Fixed const &a, Fixed const &b);
	static Fixed		max(Fixed &a, Fixed &b);
	static Fixed		max(Fixed const &a, Fixed const &b);

private :

	int					_value;
	static const int	_bitsForFrac;

};

std::ostream&	operator<<(std::ostream &lhs, Fixed const &rhs);

#endif
