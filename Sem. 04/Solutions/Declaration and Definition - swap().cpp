#include <iostream>
using namespace std;

void print(double a, double b);

void swap(double &a, double &b); //Reference & - Actual data, NOT a copy.


int main()
{
	double num1, num2;
	cin >> num1 >> num2;//Example Input: 3.14 4.13
	swap(num1, num2);
	print(num1, num2);//Example Output: 4.13 3.14
	
	return 0;
}

void print(double a, double b)
{
	cout << a << " " << b << endl;
}

void swap(double &a, double &b) //Reference & - Actual data, NOT a copy.
{
	double temp = a;
	a = b;
	b = temp;
}