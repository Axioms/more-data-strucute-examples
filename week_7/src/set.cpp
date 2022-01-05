/**
Name: Karan Munday
Assignment Number: 7
Class Section: 04
**/

#include "set.h"
#include "toolkit.h"
#include <iostream>
set::set() {
	head_ptr = NULL;
	tail_ptr = NULL;
	many_nodes = 0;
}

set::set(const set& source) {
	head_ptr = NULL;
	tail_ptr = NULL;
	list_copy(source.head_ptr, head_ptr, tail_ptr);
	many_nodes = source.many_nodes;
}

set::~set() {
	list_clear(head_ptr);
}

void set::insert(value_type value) {
	if(!contains(value)) {
		if(head_ptr == NULL) {
			head_ptr = new node(value);
			tail_ptr = head_ptr;
		}
		else {
			list_insert(tail_ptr, value);
			tail_ptr = tail_ptr->link();
		}
		many_nodes++;
	}
}

void set::erase(value_type value) {
	node* pre_curr = NULL;
	node* curr = head_ptr;
	bool is_deleted = false;
	
	while (curr != NULL && !is_deleted) {
		if(pre_curr == NULL && curr->data() == value) {
			list_head_remove(head_ptr);
			is_deleted = true;
			many_nodes--;
		}
		else if(curr->data() == value) {
			list_remove(pre_curr);
			is_deleted = true;
			many_nodes--;
		}
		if(!is_deleted) {
			pre_curr = curr;
			curr = curr->link();
		}
	}
}

void set::operator = (const set& source) {
	list_clear(head_ptr);
	head_ptr = NULL;
	tail_ptr =NULL;
	list_copy(source.head_ptr, head_ptr, tail_ptr);
	many_nodes = source.many_nodes;
}

bool set::contains(const value_type& value) const {
	node* curr = head_ptr;
	while (curr != NULL) {
		if(curr->data() == value) {
			return true;
		}
		curr = curr->link();
	}
	return false;
}

set::size_type set::size() const {
	return many_nodes;
}

void set::display() const{
	node* curr = head_ptr;
	if (curr == NULL) {
		std::cout << "[ ]" << std::endl;
	}
	else {
		std::cout << "[ ";
		while(curr != NULL) {
			std::cout << curr->data() << " ";
			curr = curr->link();
		}
		std::cout << "]" << std::endl;
	}
}

void set_union(const set& s1, const set& s2) {
	set answer = set(s1);
	node* curr = s2.head_ptr;
	while(curr != NULL) {
		answer.insert(curr->data());
		curr = curr->link();
	}
	answer.display();
}

void set_intersection(const set& s1, const set& s2) {
	node* curr = s2.head_ptr;
	std::cout << "[ ";
	while(curr != NULL) {
		if(s1.contains(curr->data())) {
			std::cout << curr->data() << " ";
		}
		curr = curr->link();
	}
	std::cout << "]" << std::endl;
}

void set_rel_complement(const set& s1, const set& s2) {
	node* curr = s2.head_ptr;
	std::cout << "[ ";
	while(curr != NULL) {
		if(!s1.contains(curr->data())) {
			std::cout << curr->data() << " ";
		}
		curr = curr->link();
	}
	std::cout << "]" << std::endl;
}