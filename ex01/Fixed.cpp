#include "Fixed.hpp"

const int	Fixed::_bitsForFrac = 8;

// Constructor //

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int value) : _value(value << 8)
{
}

Fixed::Fixed(const float value) : _value(value * (1 << _bitsForFrac))
{
}

// Operator //

Fixed& Fixed::operator=(const Fixed &ref)
{
	std::cout << "Assigment opperator called" << std::endl;
	this->_value = ref.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream &lhs, Fixed const &rhs)
{
	lhs << rhs.toFloat();
	return(lhs);
}

// Accessors //

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called" << std::endl;
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits called" << std::endl;
	_value = raw;
}

// Member functions //

int Fixed::toInt(void) const
{
	return (_value >> 8);
}

float Fixed::toFloat(void) const
{
	//std::cout << "Value = " << _value << std::endl;
	//std::cout << (float)(316014 * (1 << 8)) << std::endl;
	return ((float)_value / (1 << _bitsForFrac));
}


