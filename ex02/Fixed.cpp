#include "Fixed.hpp"

const int	Fixed::_bitsForFrac = 8;

// Constructor //

Fixed::Fixed() : _value(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::Fixed(const int value) : _value(value << 8)
{
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _bitsForFrac)))
{
}

// Operators //

Fixed& Fixed::operator=(const Fixed &ref)
{
	this->_value = ref.getRawBits();
	return (*this);
}

bool Fixed::operator<(const Fixed &ref)
{
	if (this->_value < ref.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed &ref)
{
	if (this->_value > ref.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &ref)
{
	if (this->_value <= ref.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &ref)
{
	if (this->_value >= ref.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &ref)
{
	if (this->_value != ref.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &ref)
{
	if (this->_value == ref.getRawBits())
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed &ref)
{
	return (this->toFloat() + ref.toFloat());
}

Fixed Fixed::operator-(const Fixed &ref)
{
	return (this->toFloat() - ref.toFloat());
}

Fixed Fixed::operator*(const Fixed &ref)
{
	return (this->toFloat() * ref.toFloat());
}

Fixed Fixed::operator/(const Fixed &ref)
{
	return (this->toFloat() / ref.toFloat());
}

Fixed Fixed::operator++()
{
	this->_value++;
	return (this->toFloat());
}

Fixed Fixed::operator++(int n)
{
	(void)n;
	float tmp = this->toFloat();
	this->_value++;
	return (tmp);
}

Fixed Fixed::operator--()
{
	this->_value--;
	return (this->toFloat());
}

Fixed Fixed::operator--(int n)
{
	(void)n;
	float tmp = this->toFloat();
	this->_value--;
	return (tmp);
}


std::ostream&	operator<<(std::ostream &lhs, Fixed const &rhs)
{
	lhs << rhs.toFloat();
	return(lhs);
}

// Accessors //

int Fixed::getRawBits(void) const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

// Member functions //

int Fixed::toInt(void) const
{
	return (_value >> 8);
}

float Fixed::toFloat(void) const
{
	return ((float)_value / (float)(1 << _bitsForFrac));
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return(a);
	return(b);
}

Fixed	Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return(a);
	return(b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return(a);
	return(b);
}

Fixed	Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return(a);
	return(b);
}


