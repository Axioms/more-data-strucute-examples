#include <iostream>
#include "expression_tree.h"
int main() {
	etree etree_one, etree_two;
	std::cout << "creating a expression tree with the expression (3 + 7) * 14" << std::endl;
	// The following expression is (3 + 7) * 14 in infix notation 
	etree_one.buildtree("3 7 + 14 *");
	
	std::cout << "creating a expression tree with the expression (57 + 10) * (80 * 70 + 10)" << std::endl;
	// The following expression is (57 + 10) * (80 * 70 + 10) in infix notation 
	etree_two.buildtree("57 10 + 80 70 * 10 + *");
	
	std::cout << std::endl << "evaluation of (3 + 7) * 14 is: " << etree_one.evaluate(etree_one.get_root()) << std::endl;
	std::cout << "evaluation of (57 + 10) * (80 * 70 + 10) is: " << etree_two.evaluate(etree_two.get_root()) << std::endl;
	return 0;
}