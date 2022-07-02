#include <iostream>
using namespace std;

double const PI = 3.14159265;

int main() {
	double radius;
	cout << "Enter radius: ";
	cin >> radius;
	double length = 2 * PI * radius;
	double S = PI * radius * radius;

	cout << "Length = " << length << endl;
	cout << "S = " << S << endl;
}