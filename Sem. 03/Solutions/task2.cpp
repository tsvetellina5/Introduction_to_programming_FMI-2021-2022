#include <iostream>
using namespace std;

int main()
{
	int num1; cin >> num1;
	int num2; cin >> num2;
	int Biggest_value;
	num2 >= num1 ? Biggest_value = num2 : Biggest_value = num1;
	for (int Divider = Biggest_value; Divider >= 1; Divider--)
	{
		if (num1 % Divider == 0 && num2 % Divider == 0)
		{
				cout << Divider << " ";
		}
	}
	return 0;
}