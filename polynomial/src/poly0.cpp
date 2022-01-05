#include "poly0.h"
#include <assert.h>
#include <cmath>
#include <climits>

using namespace main_savitch_3;

polynomial::polynomial(double c, unsigned int exponent) {
	size = CAPACITY;
	coef = new double[size];
	clear();
	coef[exponent] = c;
	compute_degree();
}

polynomial::polynomial(const polynomial& source) {
	size = source.size;
	coef = new double[size];
	clear();
	current_degree = source.current_degree;
	std::copy(source.coef, source.coef + size, coef);
}

polynomial::~polynomial() {
	delete[] coef;
}

void polynomial::add_to_coef(double amount, unsigned int exponent) {
	if (exponent >= size) {
		reserve(ceil(exponent * 1.25));
		coef[exponent] = 0;
	}

	coef[exponent] += amount;
	compute_degree();
}

void polynomial::assign_coef(double coefficient, unsigned int exponent) {
	if (exponent >= size) {
		reserve(ceil(exponent * 1.25));
		for (unsigned int i = size; i < size; i++) {
			coef[i] = 0;
		}
	}
	coef[exponent] = coefficient;
	compute_degree();
}

void polynomial::clear() {
	for (unsigned int i = 0; i < size; i++) {
		coef[i] = 0;
	}
	current_degree = 0;
}

double polynomial::coefficient(unsigned int exponent) const {
	if (exponent >= size) {
		return 0;
	}

	return coef[exponent];
}

double polynomial::eval(double x) const {
	double val = 0;

	for(unsigned int i = 0; i <= current_degree; i++) {
		val += coef[i] * pow(x, i);
	}
	return val;
}

unsigned int polynomial::next_term(unsigned int e) const {
	if (e < size) {
		for (unsigned int i = e + 1; i < size; i++) {
			if (coef[i] != 0) {
				return i;
			}
		}
	}
	return 0;
}

unsigned int polynomial::previous_term(unsigned int e) const {
	if (e >= size) {
		e = size - 1;
	}
	for (unsigned int i = e; i > 0; i--) {
		if (coef[i - 1] != 0) {
			return i - 1;
		}
	}

	return UINT_MAX;
}

void polynomial::compute_degree() {
	bool was_set = false;
	for (unsigned int i = 0; i < size; i++) {
		if (next_term(i) != 0) {
			current_degree = i + 1;
			was_set = true;
		}
	}
	if (!was_set) {
		current_degree = 0;
	}
}

void polynomial::reserve(unsigned int new_size) {
	double* new_data = new double[new_size];
	std::copy(coef, coef + size, new_data);
	delete[] coef;
	coef = new_data;
	delete[] new_data;
	size = new_size;
}

polynomial main_savitch_3::operator + (const polynomial& p1, const polynomial& p2)
{
	unsigned int size_one = p1.degree();
	unsigned int size_two = p2.degree();
	polynomial ret;

	if (size_one > size_two) {
		for (unsigned int i = 0; i <= size_one; i++) {
			ret.add_to_coef(p1.coefficient(i) + p2.coefficient(i), i);
		}
	}

	else {
		for (unsigned int i = 0; i <= size_two; i++) {
			ret.add_to_coef(p1.coefficient(i) + p2.coefficient(i), i);
		}
	}
	return ret;
}

polynomial main_savitch_3::operator - (const polynomial& p1, const polynomial& p2) {
	unsigned int size_one = p1.degree();
	unsigned int size_two = p2.degree();
	polynomial ret;

	if (size_one > size_two) {
		for (unsigned int i = 0; i <= size_one; i++) {
			ret.add_to_coef(p1.coefficient(i) - p2.coefficient(i), i);
		}
	}

	else {
		for (unsigned int i = 0; i <= size_two; i++) {
			ret.add_to_coef(p1.coefficient(i) - p2.coefficient(i), i);
		}
	}
	return ret;
}

std::ostream& main_savitch_3::operator << (std::ostream& out, const polynomial& p) {
	out << std::endl;
	for (unsigned int i = p.degree(); i > 0; i--) {
		if (p.coefficient(i) != 0.0 && i != 0) {
			if (p.coefficient(i) > 0 && i != p.degree()) {
				out << "+";
			}
			if (i > 1) {
				out << p.coefficient(i) << "x^" << i << " ";
			}
			else {
				out << p.coefficient(i) << " ";
			}
		}
	}
	out << std::endl;
	return out;
}