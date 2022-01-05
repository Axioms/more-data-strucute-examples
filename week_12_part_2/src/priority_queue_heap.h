#ifndef PRIORITY_QUEUE_HEAP_H
#define PRIORITY_QUEUE_HEAP_H
#include "heap.h"

template <class T>
class priority_queue_heap {
	public:
		priority_queue_heap();

		bool is_empty() const;

		bool is_full() const;

		/**
		 * Remove the largest value from this priority queue and return it.
		 *
		 * Precondition: priority queue is not empty.
		 */
		T remove();

		/**
		 * Inserts the 'value' into the priority queue.
		 *
		 * Precondition: priority queue is not full
		 */
		void insert(const T& value);

	private:
		heap<T> h;
};

#include "priority_queue_heap.template"


#endif // PRIORITY_QUEUE_HEAP_H
