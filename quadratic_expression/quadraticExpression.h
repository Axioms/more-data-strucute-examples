/**
Name: Karan Munday
Assignment Number: 2
Class Section: 04
**/
#ifndef QUADRATICEXPRESSION_H
#define QUADRATICEXPRESSION_H
#include <string>
class quadraticExpression
{
public:
	//Precondition: aVal, bVal and cVal are valid ints
	//Postcondition: The object is initaized
	quadraticExpression(int aVal, int bVal, int cVal);
	~quadraticExpression();
	
	// Logic
	
	//Precondition: x is a valid double
	//Postcondition: the y of the quadratic expression is returned
	double evaluate(double x) const;
	//Postcondition: the number of real zeros is returned
	int numberOfRealZeros() const;
	//Postcondition: the real zeros are returned
	std::string realZeros() const;
	
	// accessors
	
	//Postcondition: a is returned
	int geta() const;
	//Postcondition: b is returned
	int getb() const;
	//Postcondition: c is returned
	int getc() const;
	
private:
	int a,b,c;
};

#endif // QUADRATICEXPRESSION_H
