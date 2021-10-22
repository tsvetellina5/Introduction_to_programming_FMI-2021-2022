#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	int reversedNumber = 0;

	while (number != 0)
	{
		int lastDigit = number % 10;
		(reversedNumber *= 10) += lastDigit;

		number /= 10;
	}

	reversedNumber++;
	cout << reversedNumber << endl;
}