/**
Name: Karan Munday
Assignment Number: 6
Class Section: 04
**/
#include "list.h"
#include <assert.h>

list tail(list lst) {
	assert(lst != NULL);
	lst = lst->link();
	return lst;
}

value_type head(list lst) {
	assert(lst != NULL);
	return lst->data();
}

bool list_is_empty(list lst) {
	return lst == NULL;
}

list cons(value_type val, const list lst) {
	list new_head = new node(val, lst);
	return new_head;
}

list append(const list lst, value_type val) {
	if (lst == NULL) {
		return cons(val, NULL);
	}
	else {
		return cons(head(lst),append(tail(lst), val));
	}
}

list append(const list lst_first, const list lst_second) {
	if (lst_first == NULL) {
		return lst_second;
	}
	else {
		return cons(head(lst_first), append(tail(lst_first), lst_second));
	}
}

list remove_all_of(const list lst, value_type val) {
	if (lst == NULL) {
		return lst;
	}
	if (head(lst) == val) {
		return remove_all_of(tail(lst), val);
	}
	else {
		return cons(head(lst), remove_all_of(tail(lst), val));

	}
}

list remove_last(const list lst) {
	assert(lst != NULL);
	
	if (tail(lst) == NULL) {
		return tail(lst);
	}
	else {
		return cons(head(lst), remove_last(tail(lst)));
	}
}

value_type last(const list lst) {
	assert(lst != NULL);
	if (tail(lst) == NULL) {
		return head(lst);
	}
	else {
		return last(tail(lst));
	}
}


bool equals(const list list1, const list list2) {
	if (list_is_empty(list1)) {
		return list_is_empty(list2);
	}
	else if (list_is_empty(list2)) {
		return false;
	}
	else if (head(list1) != head(list2)) {
		return false;
	}
	else {
		return equals(tail(list1), tail(list2));
	}
}
