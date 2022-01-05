/**
Name: Karan Munday
Assignment Number: 8
Class Section: 04
**/
#include "deque.h"
#include <iostream>

int main() {
	// Test 1 push front and push back
	std::cout << "Test 1 <Push front and Push Back>" << std::endl << std::endl;
	std::cout << "creating 'deque1' and adding [1,2,3,4,5] to the front and displaying it." << std::endl;
	deque<int> deque1;
	for (int i = 5; i > 0; i--) {
		deque1.push_front(i);
	}
	std::cout << "deque1: " << deque1 << std::endl;
	std::cout << "size of deque1: " << deque1.size() << std::endl << std::endl;
	
	std::cout << "adding [6,7,8,9,10] to the back of 'deque1' and displaying it." << std::endl;
	for (int i = 6; i < 11; i++) {
		deque1.push_back(i);
	}
	std::cout << "deque1: " << deque1 << std::endl;
	std::cout << "size of deque1: " << deque1.size() << std::endl << std::endl;

	//Test 2 copy constructor and assignment operator
	std::cout << "Test 2 <copy constructor and assignment operator>" << std::endl << std::endl;
	std::cout << "creating deque2 and deque3 as copies of deque1 and adding random values into them" << std::endl;
	deque<int> deque2(deque1);
	deque<int> deque3;
	deque3 = deque1;
	std::cout << "deque1 before adding random values: " << deque1 << std::endl;
	std::cout << "deque2 before adding random values: " << deque2 << std::endl;
	std::cout << "deque3 before adding random values: " << deque3 << std::endl << std::endl;
	for (int i = 0; i < 4; i++) {
		deque2.push_back( rand() % 10 + 1);
		deque3.push_back( rand() % 10 + 1);
	}


	std::cout << "deque1 after adding random values: " << deque1 << std::endl;
	std::cout << "deque2 after adding random values: " << deque2 << std::endl;
	std::cout << "deque3 after adding random values: " << deque3 << std::endl << std::endl;

	//Test 3 Pop (front and back) and back() and front()
	std::cout << "Test 3 <Pop (front and back) and back() and front()>" << std::endl << std::endl;
	std::cout << "poping the first 4 numbers and displaying the new front after each pop." << std::endl;
	for (int i = 0; i < 4; i++) {
		deque1.pop_front();
		std::cout << "new front is: " << deque1.front() << std::endl;
	}

	std::cout << std::endl << "poping the last 4 numbers and displaying the new front after each pop." << std::endl;
	for (int i = 0; i < 4; i++) {
		deque1.pop_back();
		std::cout << "new back is: " << deque1.back() << std::endl;
	}

	std::cout << "deque1 after poping: " << deque1 << std::endl;


	// Test 4 front() const and back() const
	std::cout << std::endl << "Test 4 <back() const and front() const of const deque4>" << std::endl << std::endl;
	const deque<int> deque4 = deque3;
	std::cout << "deque4 front: " << deque4.front() << std::endl;
	std::cout << "deque4 back: " << deque4.back() << std::endl;

	// Test 5 empty
	std::cout << std::endl << "Test 5 <Empty>" << std::endl << std::endl;
	std::cout << "creating a new empty deque (deque5)..." << std::endl << std::endl;
	const deque<int> deque5;
	std::cout << "is deque1 empty? " << (deque1.empty() ? "Yes!":"No!") << std::endl;
	std::cout << "is deque2 empty? " << (deque2.empty() ? "Yes!":"No!") << std::endl;
	std::cout << "is deque3 empty? " << (deque3.empty() ? "Yes!":"No!") << std::endl;
	std::cout << "is deque4 empty? " << (deque4.empty() ? "Yes!":"No!") << std::endl;
	std::cout << "is deque5 empty? " << (deque5.empty() ? "Yes!":"No!") << std::endl;


	// Test 5 == operator
	std::cout << std::endl << "Tset 6 <'== operator'>" << std::endl << std::endl;
	std::cout << "creating a new deque (deque6) which is a copy of deque2..." << std::endl << std::endl;
	const deque<int> deque6(deque2);
	std::cout << "does deque1 equal deque2? " << (deque1 == deque2 ? "Yes!" : "No!") << std::endl;
	std::cout << "does deque2 equal deque2? " << (deque2 == deque2 ? "Yes!" : "No!") << std::endl;
	std::cout << "does deque3 equal deque2? " << (deque3 == deque2 ? "Yes!" : "No!") << std::endl;
	std::cout << "does deque4 equal deque2? " << (deque4 == deque2 ? "Yes!" : "No!") << std::endl;
	std::cout << "does deque5 equal deque2? " << (deque5 == deque2 ? "Yes!" : "No!") << std::endl;
	std::cout << "does deque6 equal deque2? " << (deque6 == deque2 ? "Yes!" : "No!") << std::endl;

	return 0;
}