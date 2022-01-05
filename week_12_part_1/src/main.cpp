/**
Name: Karan Munday
Assignment Number: 12
Class Section: 04
**/
#include "bst.h"
#include "node2.h"
#include <iostream>
#include <cstdlib>

template <typename T>
node<T>* sub_list(node<T>* root_ptr, unsigned int start_point, unsigned int end_point) {
	unsigned int index = 0;
	node<T>* temp_node = NULL;
	node<T>* pre_curr = NULL;
	while(root_ptr != NULL && index < end_point) {
		if(index == start_point && temp_node == NULL) {
			list_head_insert(temp_node, root_ptr->data());
			pre_curr = temp_node;
		}
		else if (index > start_point) {
			list_insert(pre_curr, root_ptr->data());
			pre_curr = pre_curr->link();
		}
		index++;
		root_ptr = root_ptr->link();
	}
	return temp_node;
}

template <typename T>
void insert_list_into_bst(binary_search_tree<T>& tree, node<T>* list) {
	unsigned int list_len = list_length(list);
	if(list_len > 1) {
		node<T>* first_half = sub_list(list, 0, list_len/2);
		tree.insert(sub_list(list, list_len/2, list_len/2 + 1)->data());
		node<T>* second_half = sub_list(list, list_len/2, list_len);
		insert_list_into_bst(tree, first_half);
		insert_list_into_bst(tree, second_half);
	}
	else if(list_len == 1) {
		tree.insert(list->data());
	}
}

int main() {
	std::cout << "Inserting numbers 0-21 into a linked list inorder and printing the list." << std::endl << std::endl;
	
	node<int>* linkedlist = new node<int>(21);
	for(int i = 20; i > -1; i--) {
		list_head_insert(linkedlist, i);
	}
	
	node<int>* curr = linkedlist;
	std::cout << "[ ";
	while(curr != NULL) {
		std::cout << curr->data() << " ";
		curr = curr->link();
	}
	std::cout << "]"  << std::endl << std::endl;
	
	std::cout << "inserting items in to a bst and printing the tree" << std::endl << std::endl;
	binary_search_tree<int> bst;
	insert_list_into_bst(bst, linkedlist);
	print(bst.get_root(), 0);

	return 0;
}