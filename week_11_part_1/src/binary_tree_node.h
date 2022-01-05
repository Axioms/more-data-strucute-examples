#ifndef BINARY_TREE_NODE_H
#define BINARY_TREE_NODE_H
#include <cstdlib>
#include <string>

class binary_tree_node {
	public:
		binary_tree_node(
			const std::string& data_init,
			binary_tree_node* left_init = NULL,
			binary_tree_node* right_init = NULL
		) 
		{
			data_val = data_init;
			left_val = left_init;
			right_val = right_init;
		};
		
		const std::string& data() const { return data_val; };
		const binary_tree_node* left() const { return left_val; };
		const binary_tree_node* right() const { return right_val; };
		
		std::string& data() { return data_val; };
		binary_tree_node* left() { return left_val; };
		binary_tree_node* right() { return right_val; };
		
		void set_data(const char& data) { data_val = data; };
		void set_left(binary_tree_node* left) { left_val = left; };
		void set_right(binary_tree_node* right) { right_val = right; };

	private:
		binary_tree_node* right_val;
		binary_tree_node* left_val;
		std::string data_val;
};
#endif // BINARY_TREE_NODE_H
