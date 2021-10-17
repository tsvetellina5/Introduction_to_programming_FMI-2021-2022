#include <iostream>

using namespace std;

int main()
{
	double num1, num2;
	cout << "Enter 2 numbers: " << endl;
	cin >> num1 >> num2;

	double perimeter = 2 * (num1 + num2);

	cout << "Perimeter: " << perimeter<< endl;
	cout << "Area: " << num1 * num2 << endl;
}