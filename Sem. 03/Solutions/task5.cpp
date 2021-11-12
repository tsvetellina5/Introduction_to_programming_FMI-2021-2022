#include <iostream>
using namespace std;

int main()
{
	int number, int temp = 1;
	bool isPowOfTwo = false;
	cin >> number;
	for (size_t i = 0; temp <= number; i++)
	{
		temp *= 2;
		if (temp == number)
		{
			isPowOfTwo = true;
		}
	}
	cout << boolalpha << isPowOfTwo << endl;
	return 0;
}

