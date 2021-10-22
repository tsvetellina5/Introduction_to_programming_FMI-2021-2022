#include <iostream>

using namespace std;

int main()
{
	int num1, num2; //24,16
	cin >> num1 >> num2;

	int gcd = num1 < num2 ? num1 : num2; //16

	while (gcd >= 1)
	{
		if (num1 % gcd == 0 && num2 % gcd == 0) //8 - yes
		{
			break;
		}

		gcd--;
	}

	cout << "Gcd is: " << gcd << endl;
}