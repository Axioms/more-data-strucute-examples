/**
Name: Karan Munday
Assignment Number: 9
Class Section: 04
**/
#ifndef SEQUENCE4_H
#define SEQUENCE4_H
#include <cstdlib>
#include <stack>
namespace main_savitch_6B
{
template <class Item>
class sequence
{
	public:
		// TYPEDEFS and MEMBER CONSTANTS
		typedef double value_type;
		typedef std::size_t size_type;
		// CONSTRUCTORS and DESTRUCTOR
		sequence();
		sequence(const sequence& source);
		~sequence();
		// MODIFICATION MEMBER FUNCTIONS
		void start( );
		void advance( );
		void insert(const value_type& entry);
		void attach(const value_type& entry);
		void operator =(const sequence& source);
		void remove_current( );
		// CONSTANT MEMBER FUNCTIONS
		size_type size( ) const { return number_of_items; }
		bool is_item( ) const { return (cursor < number_of_items); }
		value_type current( ) const;
	
	private:
		std::stack<Item> first;
		std::stack<Item> second;
		size_type number_of_items;
		size_type cursor;

};

}

#include "sequence4.template"
#endif // SEQUENCE4_H
