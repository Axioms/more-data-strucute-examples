/**
Name: Karan Munday
Assignment Number: 7
Class Section: 04
**/
#include "set.h"
#include <iostream>

int main() {
	// Test 1
	std::cout << "Test 1 <Constructors>" << std::endl << std::endl;
	std::cout << "Creating a set (s1) with the following values and printing it. [ 1 2 3 4 5 6 7 8 9 ]" << std::endl;
	
	set s1;
	for(int i = 1; i < 10; i++) {
		s1.insert(i);
	}
	std::cout << "Created s1: ";
	s1.display();
	std::cout << "Number of items in s1: " << s1.size() << std::endl;
	std::cout << std::endl;
	
	std::cout << "Creating a set (s2) with the following values and printing it. [ 10 20 30 40 50 60 70 80 90 ]" << std::endl;
	
	set s2;
	for(int i = 10; i < 100; i+=10) {
		s2.insert(i);
	}
	std::cout << "Created s2: ";
	s2.display();
	std::cout << "Number of items in s2: " << s2.size() << std::endl;
	std::cout << std::endl;

	std::cout << "Creating a set (s3) using a copy constructor (copying from s2) and adding values to them." << std::endl;
	
	set s3 = set(s2);
	std::cout << "s3 after copy: ";
	s3.display();
	std::cout << "Number of items in s3: " << s3.size() << std::endl;
	std::cout << std::endl;
	for(int i = 1; i < 5; i++) {
		s3.insert(i);
	}
	std::cout << "s3 after adding values: ";
	s3.display();
	std::cout << "Number of items in s3: " << s3.size() << std::endl;
	std::cout << std::endl;
	std::cout << "s2 after adding values to s3: ";
	s2.display();
	std::cout << "Number of items in s2: " << s2.size() << std::endl;
	std::cout << std::endl;
	
	std::cout << "Creating a set (s4) using a copy constructor (copying from s1)" << std::endl;
	
	set s4 = set(s1);
	std::cout << "s4 after copy: ";
	s4.display();
	std::cout << "s1 after copy: ";
	s1.display();
	
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "Test 2 <insert and erase>" << std::endl << std::endl;
	std::cout << "Inserting '100' into s1" << std::endl;
	s1.insert(100);
	std::cout << "s1 after insert: ";
	s1.display();
	std::cout << "Number of items in s1: " << s1.size() << std::endl;
	
	std::cout << std::endl;
	std::cout << "Inserting another '100' into s1" << std::endl;
	s1.insert(100);
	std::cout << "s1 after insert: ";
	s1.display();
	std::cout << "Number of items in s1: " << s1.size() << std::endl;
	
	std::cout << std::endl;
	std::cout << "Inserting '1000' into s4" << std::endl;
	s4.insert(1000);
	std::cout << "s4 after insert: ";
	s4.display();
	std::cout << "Number of items in s4: " << s4.size() << std::endl;
	
	std::cout << std::endl;
	std::cout << "removing '1' from s1" << std::endl;
	s1.erase(1);
	std::cout << "s1 after erase: ";
	s1.display();
	std::cout << "Number of items in s1: " << s1.size() << std::endl;
	std::cout << std::endl;
	
	std::cout << "trying to remove '1' from s1 again" << std::endl;
	s1.erase(1);
	std::cout << "s1 after erase: ";
	s1.display();
	std::cout << "Number of items in s1: " << s1.size() << std::endl;
	std::cout << std::endl;
	
	std::cout << "removing '100' from s1" << std::endl;
	s1.erase(100);
	std::cout << "s1 after erase: ";
	s1.display();
	std::cout << "Number of items in s1: " << s1.size() << std::endl;
	std::cout << std::endl;
	
	std::cout << "removing '60' from s2" << std::endl;
	s2.erase(60);
	std::cout << "s2 after erase: ";
	s2.display();
	std::cout << "Number of items in s2: " << s2.size() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	
	std::cout << "Test 3 <assignment operator>" << std::endl << std::endl;
	std::cout << "Setting s1 equal to s4" << std::endl;
	std::cout << "s1 before setting s1 to s4: ";
	s1.display();
	std::cout << "Number of items in s1: " << s1.size() << std::endl;
	s1 = s4;
	std::cout << "s1 after setting s1 to s4: ";
	s1.display();
	std::cout << "Number of items in s1: " << s1.size() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "Test 4 <contains and size>" << std::endl << std::endl;
	
	std::cout << "Does s1 contain 75? " << (s1.contains(75) ? "Yes.":"No.") << std::endl;
	std::cout << "Does s1 contain 7? " << (s1.contains(7) ? "Yes.":"No.") << std::endl;
	std::cout << "Does s2 contain 90? " << (s2.contains(90) ? "Yes.":"No.") << std::endl;
	std::cout << "Does s3 contain 90? " << (s3.contains(90) ? "Yes.":"No.") << std::endl;
	std::cout << "Does s4 contain 10000? " << (s4.contains(1000) ? "Yes.":"No.") << std::endl;
	std::cout << "Does s2 contain 10? " << (s2.contains(10) ? "Yes.":"No.") << std::endl;
	std::cout << std::endl;
	std::cout << "What is the size of s1? " << s1.size() << std::endl; 
	std::cout << "What is the size of s2? " << s2.size() << std::endl; 
	std::cout << "What is the size of s3? " << s3.size() << std::endl; 
	std::cout << "What is the size of s4? " << s4.size() << std::endl; 
	
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "Test 4 <union, intersection, and complement>" << std::endl << std::endl;
	s1.display();
	s2.display();
	s3.display();
	s4.display();
	
	std::cout << "The union of s1 and s2 is: ";
	set_union(s1, s2); 
	std::cout << std::endl;
	std::cout << "The union of s1 and s4 is: ";
	set_union(s1, s4);
	std::cout << std::endl;
	std::cout << "The intersection of s1 and s3 is: ";
	set_intersection(s1, s3);
	std::cout << std::endl;
	std::cout << "The intersection of s1 and s2 is: ";
	set_intersection(s1, s2);
	std::cout << std::endl;
	std::cout << "The complement of s1 and s3 is: ";
	set_rel_complement(s1, s3);
	std::cout << std::endl;
	std::cout << "The complement of s1 and s2 is: ";
	set_rel_complement(s1, s2);
	std::cout << std::endl;
	return 0;
}