#include "Fixed.hpp"
#include <math.h>

int main( void ) {

	float f = 42.42f ;
	int	d = 100000000;
	long long int res = f * d;
	//long int i = * (int *) &f;

	//i = i >> 24;

	std::cout << res << std::endl;



}
