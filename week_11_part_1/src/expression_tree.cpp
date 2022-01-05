#include "expression_tree.h"
#include <sstream>
etree::etree(){
	root = NULL;
}

void etree::buildtree(const std::string &exp) {
	std::stack<std::string> stack;
	
	for (unsigned int i = 0; i < exp.length(); i++) {
		unsigned int j = i;
		while (j < exp.length() && exp.substr(j, 1) != " ") {
			j++;
		}
		stack.push(exp.substr(i, j-i));
		i = j;
	}

	while (!stack.empty()) {
		insert(stack.top());
		stack.pop();
	}
}

bool etree::check_if_operator(const std::string& val) {
	if (val == "*" || val == "+") {
		return true;
	}
	return false;
}

int etree::str_to_int(std::string number) {
	int num;
	std::istringstream ss(number);
	ss >> num;
	return num;
}

void etree::insert(const std::string val) {
	if (root == NULL) {
		root = new binary_tree_node(val);
	}
	else if (root->left() == NULL) {
		root->set_left(new binary_tree_node(val));
	}
	else if (root->right() == NULL && !check_if_operator(root->left()->data())) {
		root->set_right(new binary_tree_node(val));
	}
	else {
		binary_tree_node* curr = root;
		bool was_data_set = false;

		if (does_subtree_have_space(curr->left())) {
			curr = curr->left();
		}
		else if(curr->right() != NULL){
			curr = curr->right();
		}
		while (!was_data_set) {
			if (check_if_operator(curr->data()) && (curr->left() == NULL || curr->right() == NULL)) {
				if (curr->left() == NULL) {
					curr->set_left(new binary_tree_node(val));
				}
				else {
					curr->set_right(new binary_tree_node(val));
				}
				was_data_set = true;
			}
			else if (does_subtree_have_space(curr->right())) {
				curr = curr->right();
			}
			else {
				curr = curr->left();
			}
		}
	}
}

bool etree::does_subtree_have_space(const binary_tree_node* root_ptr) {
	if (root_ptr->left() == NULL && root_ptr->right() == NULL) {
		return check_if_operator(root_ptr->data());
	}
	else if (root_ptr->left() != NULL && root_ptr->right() != NULL) {
		return does_subtree_have_space(root_ptr->left()) || does_subtree_have_space(root_ptr->right());
	}
	else {
		return true;
	}
}

int etree::evaluate(binary_tree_node* root_ptr) {
	if (root_ptr->right() == NULL && root_ptr->left() == NULL) {
		return str_to_int(root_ptr->data());
	}
	else if(root_ptr->data() == "*") {
		return (evaluate(root_ptr->left()) * evaluate(root_ptr->right()));
	}
	else if(root_ptr->data() == "+") {
		return (evaluate(root_ptr->left()) + evaluate(root_ptr->right()));
	}
}