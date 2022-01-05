/**
Name: Karan Munday
Assignment Number: 10
Class Section: 04
**/
#include <iostream>
#include <string>
#include <sstream>

void numbers(std::ostream& outs, const std::string& prefix, unsigned int levels) {
	if (levels == 0) {
		outs << prefix << std::endl;
	}
	else {
		for (int i = 1; i < 10; i++) {
			std::ostringstream os;
			os << i;
			std::string new_prefix = prefix + os.str() + '.';
			numbers(outs, new_prefix, (levels - 1));
		}
	}
}

int main() {
	std::cout << "Test numbers: " << std::endl;
	numbers(std::cout, "THERBLIG", 2);
	return 0;
}