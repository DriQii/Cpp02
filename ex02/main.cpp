#include "Fixed.hpp"
#include <math.h>

int main( void )
{
	Fixed a(42.42f);
	Fixed b(42);
	Fixed c(a);

	std::cout << "\nOpperateurs de comparaison :\n" << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << (a >= c) << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << (a == c) << std::endl;
	std::cout << (a != b) << std::endl;
	std::cout << (a != c) << std::endl;

	std::cout << "\nOpperateurs arithmétiques :\n" << std::endl;
	std::cout << "a = [" << a << "] b = [" << b << "] a + b = [" << (a + b) << ']' << std::endl;
	std::cout << "a = [" << a << "] b = [" << b << "] a - b = [" << (a - b) << ']' << std::endl;
	std::cout << "a = [" << a << "] b = [" << b << "] a * b = [" << (a * b) << ']' << std::endl;
	std::cout << "a = [" << a << "] b = [" << b << "] a / b = [" << (a / b) << ']' << std::endl;

	std::cout << "\nOpperateurs d'incrementation :\n" << std::endl;
	std::cout << "a = [ "<< a << "] b = [" << b << ']' << std::endl;
	std::cout << "a++ = [ "<< a++ << "] b++ = [" << b++ << ']' << std::endl;
	std::cout << "a = [ "<< a << "] b = [" << b << ']' << std::endl;
	std::cout << "++a = [ "<< ++a << "] ++b = [" << ++b << ']' << std::endl;
	std::cout << "a = [ "<< a << "] b = [" << b << ']' << std::endl;
	std::cout << "a-- = [ "<< a-- << "] b-- = [" << b-- << ']' << std::endl;
	std::cout << "a = [ "<< a << "] b = [" << b << ']' << std::endl;
	std::cout << "--a = [ "<< --a << "] --b = [" << --b << ']' << std::endl;
	std::cout << "a = [ "<< a << "] b = [" << b << ']' << std::endl;

	std::cout << "\nFonctions :\n" << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::max(a, b) << "\n" << std::endl;

}

/* int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return (0);
} */
