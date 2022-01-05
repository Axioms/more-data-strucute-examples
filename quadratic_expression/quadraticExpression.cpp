/**
Name: Karan Munday
Assignment Number: 2
Class Section: 04
**/
#include "quadraticExpression.h"
#include <math.h>
quadraticExpression::quadraticExpression(int aVal, int bVal, int cVal)
{
	a = aVal;
	b = bVal;
	c = cVal;
}

quadraticExpression::~quadraticExpression()
{
}


double quadraticExpression::evaluate(double x) const {
	return a * pow(x, 2.0) + b * x + c;
}

int quadraticExpression::numberOfRealZeros() const {
	int discriminant = pow(b, 2) - 4 * a * c;
	
	if(discriminant > 0) {
		return 2;
	}
	else if(discriminant == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

std::string quadraticExpression::realZeros() const {
	int discriminant = pow(b, 2) - 4 * a * c;
	
	if(discriminant > 0) {
		double firstZero = (-b + sqrt(discriminant)) / (2*a);
		double secondZero = (-b - sqrt(discriminant)) / (2*a);
		return "" + std::to_string(firstZero) + " and " + std::to_string(secondZero);
	}
	else if(discriminant == 0) {
		double zero = (-b + sqrt(discriminant)) / (2*a);
		return "" + std::to_string(zero);
	}
	else {
		return "There are no real zeros.";
	}
}

int quadraticExpression::geta() const {
	return a;
}

int quadraticExpression::getb() const {
	return b;
}

int quadraticExpression::getc() const {
	return c;
}