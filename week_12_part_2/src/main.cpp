/**
Name: Karan Munday
Assignment Number: 12
Class Section: 04
**/
/**
 * Insert a few elements into a heap and the remove them
 * one by one and see if we get them in the right.
 */

#include "heap.h"
#include "priority_queue_simple.h"
#include "priority_queue_heap.h"
#include <iostream>
#include <ctime>
using namespace std;

void test1() {
    heap<int> hp;
    hp.insert(1);
    hp.insert(2);
    hp.insert(3);
    hp.insert(4);
    hp.insert(5);
    hp.check_heap();

    int x = hp.remove();
    cout << "removed " << x << endl;
    x = hp.remove();
    cout << "removed " << x << endl;
    x = hp.remove();
    cout << "removed " << x << endl;
    x = hp.remove();
    cout << "removed " << x << endl;
    x = hp.remove();
    cout << "removed " << x << endl;

    cout << "empty? " << hp.is_empty() << endl;
}

void test2() {
    srand(time(NULL));
    heap<int> hp;
    for(int i = 0; i < 10; i++ ) {
        hp.insert(rand());
    }
    while(!hp.is_empty()) {
        int x = hp.remove();
        cout << x << endl;
    }
}

void Priority_queue_simple() {
	cout << endl << "inserting 1-5 into " << "simple priority queue " << "then removing them" << endl;
	priority_queue_simple<int> pqs;
    pqs.insert(1);
    pqs.insert(2);
    pqs.insert(3);
    pqs.insert(4);
    pqs.insert(5);
	cout << "empty? " << pqs.is_empty() << endl;
	cout << "full? " << pqs.is_full() << endl;
    int x = pqs.remove();
    cout << "removed " << x << endl;
    x = pqs.remove();
    cout << "removed " << x << endl;
    x = pqs.remove();
    cout << "removed " << x << endl;
    x = pqs.remove();
    cout << "removed " << x << endl;
    x = pqs.remove();
    cout << "removed " << x << endl;

    cout << "empty? " << pqs.is_empty() << endl;
	cout << "full? " << pqs.is_full() << endl;
	
	cout << endl << "inserting 0-29 into " << "simple priority queue " << "then removing them" << endl;
	
	srand(time(NULL));
    priority_queue_simple<int> pqs1;
    for(int i = 0; i < 30; i++ ) {
        pqs1.insert(rand());
    }
	cout << "empty? " << pqs1.is_empty() << endl;
	cout << "full? " << pqs1.is_full() << endl;
	
    while(!pqs1.is_empty()) {
        int x = pqs1.remove();
        cout << x << endl;
    }
	
	cout << "empty? " << pqs1.is_empty() << endl;
	cout << "full? " << pqs1.is_full() << endl;
}

void Priority_queue_heap() {
	cout << endl << "inserting 1-5 into " << "heap priority queue " << "then removing them" << endl;
	priority_queue_heap<int> pqh;
    pqh.insert(1);
    pqh.insert(2);
    pqh.insert(3);
    pqh.insert(4);
    pqh.insert(5);
	cout << "empty? " << pqh.is_empty() << endl;
	cout << "full? " << pqh.is_full() << endl;
    int x = pqh.remove();
    cout << "removed " << x << endl;
    x = pqh.remove();
    cout << "removed " << x << endl;
    x = pqh.remove();
    cout << "removed " << x << endl;
    x = pqh.remove();
    cout << "removed " << x << endl;
    x = pqh.remove();
    cout << "removed " << x << endl;

    cout << "empty? " << pqh.is_empty() << endl;
	cout << "full? " << pqh.is_full() << endl;
	
	cout << endl << "inserting 0-29 into " << "heap priority queue " << "then removing them" << endl;
	
	srand(time(NULL));
    priority_queue_heap<int> pqh1;
    for(int i = 0; i < 10; i++ ) {
        pqh1.insert(rand());
    }
	cout << "empty? " << pqh1.is_empty() << endl;
	cout << "full? " << pqh1.is_full() << endl;
	
    while(!pqh1.is_empty()) {
        int x = pqh1.remove();
        cout << x << endl;
    }
	
	cout << "empty? " << pqh1.is_empty() << endl;
	cout << "full? " << pqh1.is_full() << endl;
}

int main() {
    test1();
    test2();
	
	cout << endl << "Testing simple priority queue." << endl <<  endl;
	Priority_queue_simple();
	
	cout << endl << "Testing heap priority queue." << endl <<  endl;
	Priority_queue_heap();
}