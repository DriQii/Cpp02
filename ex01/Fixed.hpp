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

	int getRawBits(void) const;
	void setRawBits( int const raw );

	int toInt(void) const;
	float toFloat(void) const;

private :

	int					_value;
	static const int	_bitsForFrac;

};

std::ostream&	operator<<(std::ostream &lhs, Fixed const &rhs);

#endif
