#include <iostream>
using namespace std;

const int LIMIT = 62535;

int main()
{
	int number;
	int min = INT_MAX;
	int max = INT_MIN;
	int counter = NULL;

	while (cin >> number)
	{
		if (number >= NULL && number <= LIMIT)
		{
			if (min > number)
				min = number;

			if (max < number)
				max = number;

			counter++;
		}
		else if (number < NULL)//condition on input of negative number
		{
			break; //ends while loop (line 14)
		}
	}

	if (counter < 2)
		cout << "Error! You have entered less than 2 natural numbers!" << endl;
	else
		cout << "Result is: " << ((max > min) ? max - min : min - max) << endl;


	system("pause");
	return 0;
}
