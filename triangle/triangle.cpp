#include "triangle.h"
#include <iostream>

using namespace std;

triangle& triangle::Init(double a, double b)
{
	first = a;
	second = b;
	return *this;
}

void triangle::Read() {
	cout << "a = "; cin >> first;
	cout << "b = "; cin >> second;
}

void triangle::Display() const {
	cout << "c = " << fun << endl;
}

triangle& triangle::hypotenuse() {
	fun = sqrt(first * first + second * second);
	return *this;
}