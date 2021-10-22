#include <iostream>

using namespace std;
int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	if (num1 < num2) //swap
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	while (num2 != 0)
	{
		int mod = num1 % num2;
		num1 = num2;
		num2 = mod;
	}

	cout << num1 << endl;
}