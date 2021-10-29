#include <iostream>
#include <math.h>
using namespace std;

const long long UPPERLIMIT = pow(2, 32) - 1;
const long long LOWERLIMIT = -pow(2, 32);

int main()
{
	long long number, digit, counter = 0;
	cin >> number >> digit;

	if ((digit < 0 || digit > 9) || (number < LOWERLIMIT || number > UPPERLIMIT))
	{
		cout << "-1" << endl;
		return -1; //end program
	}

	if (number < 0) //case if negative
		number *= -1;

	if (number == 0 && digit == 0) //case if 0 0
		counter++;

	while (number > 0)
	{
		if (number % 10 == digit)
			counter++;

		number /= 10;
	}

	cout << "In number: " << number << endl;
	cout << "Digit " << digit << "'s count: " << counter << endl;

	return 0;
}