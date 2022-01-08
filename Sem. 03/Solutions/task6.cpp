#include <iostream>
#include <cmath>
using namespace std;

const int MULTIPLIER = 2;

int main()
{
	int number;
	cin >> number;

	if (number <= 0)
		return -1;

	while (number > 0)
	{
		int i = 0;
		while (pow(MULTIPLIER, i + 1) <= number)
		{
			i++;
		}
		number -= pow(MULTIPLIER, i);
		number != 0 ? cout << 2 << "^" << i << " + " : cout << 2 << "^" << i << endl;
	}

	return 0;
}


