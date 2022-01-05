/**
Name: Karan Munday
Assignment Number: 5
Class Section: 04
**/
#include <iostream>
#include "node1.h"
#include <cstdlib>

using namespace main_savitch_5;

void delete_repetitions(node*& head_ptr);
void list_split(node* head_ptr, node*& lower_half_ptr, node*& higher_half_ptr, node::value_type split_value);
void list_sort(node*& head_ptr);
void list_print(node* head_ptr);

int main() {
	node *h1 = new node(7);

	list_insert(h1, 8);
	list_insert(h1, 8);
	list_insert(h1, 6);
	list_insert(h1, 6);
	list_insert(h1, 7);
	list_insert(h1, 8);
	list_insert(h1, 2);
	list_insert(h1, 2);
	list_insert(h1, 1);
	std::cout << "---REMOVE DUPLICATES---" << std::endl << std::endl;

	std::cout << "Before remove: ";
	list_print(h1);

	delete_repetitions(h1);

	std::cout << "After remove: ";
	list_print(h1);

	std::cout << std::endl;
	std::cout << "---SPLIT---" << std::endl << std::endl;

	node* h2 = new node(500);
	node* h2_lower_half = new node;
	node* h2_higher_half = new node;

	list_insert(h2, 20);
	list_insert(h2, 41);
	list_insert(h2, 2);
	list_insert(h2, 9);
	list_insert(h2, 7);
	list_insert(h2, 99);
	list_insert(h2, 1);
	list_insert(h2, 21);
	list_insert(h2, 1);
	list_insert(h2, 3);
	list_insert(h2, 5);
	list_insert(h2, 87);
	list_insert(h2, 3);
	list_insert(h2, 45);
	list_insert(h2, 80);
	std::cout << "Before split: ";
	list_print(h2);

	list_split(h2, h2_lower_half, h2_higher_half, 10);
	
	std::cout << "After split: " << std::endl;
	std::cout << "    Lower half: ";
	list_print(h2_lower_half);
	std::cout << "    Higher half: ";
	list_print(h2_higher_half);

	std::cout << std::endl;
	std::cout << "---SORT---" << std::endl << std::endl;

	std::cout << "Before sort: ";
	list_print(h2);
	list_sort(h2);
	std::cout << "After sort: ";
	list_print(h2);

	return 0;
}

void delete_repetitions(node*& head_ptr) {
	node *trev = head_ptr;
	while(trev != NULL) {
		node::value_type data = trev->data();
		
		node* prev_node = trev;
		node* pass_place = trev;
		trev = trev->link();
		
		while(trev != NULL) {


			if(trev->data() == data) {
				list_remove(prev_node);
			}
			else {
				prev_node = prev_node->link();
			}
			trev = prev_node->link();
		}
		
		trev = pass_place->link();
	}
}

void list_split(node* head_ptr, node*& lower_half_ptr, node*& higher_half_ptr, node::value_type split_value) {
	/*
	POST-CONDITION: the source is un touched and a lower and higher set is created
	*/
	while (head_ptr != NULL) {
		if (head_ptr->data() < split_value) {
			list_insert(lower_half_ptr, head_ptr->data());
		}
		else {
			list_insert(higher_half_ptr, head_ptr->data());
		}
		head_ptr = head_ptr->link();
	}
	list_head_remove(lower_half_ptr);
	list_head_remove(higher_half_ptr);
}

void list_sort(node*& head_ptr) {
	node* head;
	node* sorted = new node;
	node* pre_node_to_be_removed = NULL;
	node::value_type largest_value;
	while (list_length(head_ptr) > 1) {
		head = head_ptr;
		largest_value = head_ptr->data();
		pre_node_to_be_removed = head;
		while (head->link() != NULL) {
			if (head->link()->data() > largest_value) {
				largest_value = head->link()->data();
				pre_node_to_be_removed = head;
			}
			head = head->link();
		}
		if (head_ptr->data() == largest_value) {
			list_head_remove(head_ptr);
		}
		else {
			list_remove(pre_node_to_be_removed);
		}
		list_insert(sorted, largest_value);
	}
	list_insert(sorted, head_ptr->data());
	list_head_remove(sorted);
	head_ptr = sorted;
}

void list_print(node* head_ptr) {
	node *trev = head_ptr;
	std::cout << "[ ";
	
	while(trev != NULL) {
		std::cout << trev->data() << " ";
		trev = trev->link();
	}
	std::cout << "]" << std::endl;
	delete trev;
}