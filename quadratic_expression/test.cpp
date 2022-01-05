/**
Name: Karan Munday
Assignment Number: 2
Class Section: 04
**/
#include <iostream>
#include "quadraticExpression.h"

int main()
{
	quadraticExpression quad(2, -30, 1);
	
	std::cout << "value of a: " << quad.geta() << std::endl;
	std::cout << "value of b: " << quad.getb() << std::endl;
	std::cout << "value of c: " << quad.getc() << std::endl << std::endl;
	
	int realZeros = quad.numberOfRealZeros();
	
	std::cout << "number of real zeros: " << realZeros << std::endl;
	
	if(realZeros == 2) {
		std::cout << "The real zeros are " << quad.realZeros() << std::endl;
	}
	else if(realZeros == 1) {
		std::cout << "The real zeros is " << quad.realZeros() << std::endl;
	}
	else {
		std::cout << quad.realZeros() << std::endl;
	}

	std::cout << "the value of y at x = 16 is " << quad.evaluate(16) << std::endl;
	return 0;
}
