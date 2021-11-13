#include <iostream>
using namespace std;

int main()
{
	int Number; cin >> Number;
	int New_number = Number;
	int Multiplier = 1;
	int Count_digits_of_number = 0;
	while (New_number != 0)
	{
		New_number /= 10;
		Count_digits_of_number++;
	}
	if (Count_digits_of_number > 2)
	{
		const int Central_digit = Count_digits_of_number / 2;
		for (int i = 1; i <= Count_digits_of_number; i++)
		{
			if (Count_digits_of_number % 2 != 0 && i == Central_digit + 1)
			{
				Number /= 10;
				continue;
			}
			if (Count_digits_of_number % 2 == 0 && i == Central_digit || i == Central_digit + 1) // Exceptions
			{
				Number /= 10;
				continue;
			}
			i > 1 ? Multiplier *= 10 : Multiplier;
			New_number += Number % 10 * Multiplier;
			Number /= 10;
		}
	}
	cout << New_number << " ";
	cout << ++New_number << endl;

	return 0;
}
