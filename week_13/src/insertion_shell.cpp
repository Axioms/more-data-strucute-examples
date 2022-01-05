#include <iostream>
#include <cstdlib>

void insertion_shell_sort(int data[], size_t n);

int main() {
	int user_input;
	int data[10];
	int n = 0;
	std::cout << "Insert up to 10 positive integers. terminate with a 0." << std::endl;
	std::cin >> user_input;
	while ((user_input != 0) && (n < 10)) {
        data[n] = user_input;
        n++;
        std::cin >> user_input;
    }
	
	insertion_shell_sort(data, n);
	
	std::cout << "The sorted array is: ";
	for(int i = 0; i < n; i++) {
		std::cout << data[i] << " ";
	} 
	std::cout << std::endl;
	
	return 0;
}

void insertion_shell_sort(int data[], size_t n) {
	size_t ss = n/2;
	while( ss > 0) {
		for(size_t i = ss; i < n; i++) {
			for (size_t j = i; j >= ss && data[j - ss] > data[i]; j -= ss) {
				std::swap(data[j - ss], data[i]);
			} 
		}
		ss /=2;
	}
	if(n > 1 && data[0] > data[1]) {
		std::swap(data[0], data[1]);
	}
}