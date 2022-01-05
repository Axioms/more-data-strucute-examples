/**
Name: Karan Munday
Assignment Number: 10
Class Section: 04
**/
#include <iostream>

void pattern(std::ostream& outs, unsigned int n, unsigned int i) {
	if(n < 2) {
		for (unsigned int k = 0; k < i; k++) outs << ' ';
		for (unsigned int k = 0; k < n; k++) outs << "* ";
		outs<< std::endl;
	}
	else {
		pattern(outs, n/2, i);
		for (unsigned int k = 0; k < i; k++) outs << ' ';
		for (unsigned int k = 0; k < n; k++) outs << "* ";
		outs<< std::endl;
		pattern(outs, n/2, n+i);
	}
}

int main() {
	std::cout << "Test pattern: " << std::endl;
	pattern(std::cout, 8, 0);

	return 0;
}