#include <iostream>
#include "FuzzyNumber.h"

int main(void) {
	using std::cout;

	std::cout << "\n\n////////////////////////////////////////////////////////////1 obj\n";
	FuzzyNumber A(12.0, 6.0, 7.0),
		        B(2.0, 3.0, 4.0),
	            C(0.0, 0.0, 0.0);

	cout << "\nDani(value) chusla A: " << A;
	cout << A.operator std::string();

	cout << "\n\nDani(value) chusla B: " << B;
	cout << B.operator std::string();

	C = A + B;
	cout << "\n\nAddit object A i B: ";
	cout << C.operator std::string();

	C = A * B;
	cout << "\n\nMulti object A i B: ";
	cout << C.operator std::string();
	std::cout << "\n\n////////////////////////////////////////////////////////////2 obj\n";
	FuzzyNumber a, b, c;

	cout << "\nVvedit dani(value) object a: ";
	std::cin >> a;

	cout << "\n\nDani(value) chusla a: " << a;
	cout << a.operator std::string();

	cout << "\n\nVvedit dani(value) object b: ";
	std::cin >> b;

	cout << "\n\nDani(value) chusla b: " << b;
	cout << b.operator std::string();

	c = a + b;
	cout << "\n\nAddit object a i b: ";
	cout << c.operator std::string();

	c = a * b;
	cout << "\nMulti object a i b: ";
	cout << c.operator std::string();

	return 0;
}