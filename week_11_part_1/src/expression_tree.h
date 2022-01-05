#ifndef EXPRESSION_TREE_H
#define EXPRESSION_TREE_H
#include "binary_tree_node.h"
#include <stack>
class etree {
	public:
		etree();
		void buildtree(const std::string &exp);
		int evaluate(binary_tree_node* root_ptr);
		binary_tree_node* get_root() const { return root; };
	private:
		bool check_if_operator(const std::string& val);
		int str_to_int(std::string number);
		void insert(const std::string val);
		bool does_subtree_have_space(const binary_tree_node* root_ptr);
		binary_tree_node* root;
};

#endif // EXPRESSION_TREE_H