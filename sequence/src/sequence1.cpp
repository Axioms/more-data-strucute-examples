/**
Name: Karan Munday
Assignment Number: 3
Class Section: 04
**/

#include "sequence1.h"
#include <assert.h>

using namespace main_savitch_3;

sequence::sequence() {
	used = 0;
	current_index = 0;
}

void sequence::start()
{
	current_index = 0;
}

void sequence::advance() {
	if (is_item()) {
		current_index++;
	}
}

void sequence::insert(const sequence::value_type& entry) {
	if (size() < CAPACITY) {
		for (size_type i = used; i > current_index; i--) {
			data[i] = data[i - 1];
		}
		data[current_index] = entry;
		used++;
	}
}

void sequence::attach(const sequence::value_type& entry) {
	if (size() < CAPACITY) {
		if (used > 0) {
			current_index++;
			for (size_type i = used; i > current_index; i--) {
				data[i] = data[i - 1];
			}
		}

		data[current_index] = entry;
		used++;
	}
}

void sequence::remove_current() {
	if (is_item()) {
		for (sequence::size_type i = current_index; i < used; i++ ) {
			data[i] = data[i + 1];
		}
		used--;
	}
}

sequence::size_type sequence::size() const {
	return used;
}

bool sequence::is_item() const {
	return current_index < used;
}

sequence::value_type sequence::current() const {
	assert(is_item());
	return data[current_index];
}