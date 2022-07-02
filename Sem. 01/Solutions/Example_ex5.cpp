#include <iostream>
using namespace std;

int main() {
	int a, b, t;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	t = b;
	b = a;
	a = t;
	cout << "new a = " << a << endl << "new b = " << b;
}