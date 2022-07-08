#include <iostream>
using namespace std;

const double PI = 3.14;

int main() {
	char type;
	cin >> type;
	double S;
	if (type == 's') {
		double side;
		cin >> side;
		S = side * side;
		cout << S;
	}
	else if (type == 'r') {
		double side1, side2;
		cin >> side1 >> side2;
		S = side1 * side2;
		cout << S;
	}
	else if (type == 'c') {
		double radius;
		cin >> radius;
		S = PI * radius * radius;
		cout << S;
	}
	else if (type == 't') {
		double side, height;
		cin >> side >> height;
		S = 0.5 * side * height;
		cout << S;
	}
}