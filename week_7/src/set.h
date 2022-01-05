/**
Name: Karan Munday
Assignment Number: 7
Class Section: 04
**/
#ifndef SET_H
#define SET_H

#include "toolkit.h"

class set{
	public:
		// Type defs
		typedef int value_type;
		typedef std::size_t size_type;
		// destructor/constructors
		set();
		set(const set& source);
		~set();
		// Modification member functions
		void insert(value_type value);
		void erase(value_type value);
		void operator =(const set& source);
		// Constant member functions
		bool contains(const value_type& value) const;
		size_type size() const;
		void display() const;
		// freind functions
		friend void set_union(const set& s1, const set& s2);
		friend void set_intersection(const set& s1, const set& s2);
		friend void set_rel_complement(const set& s1, const set& s2);
	private:
		node* head_ptr;
		node* tail_ptr;
		size_type many_nodes;
};

#endif // SET_H
