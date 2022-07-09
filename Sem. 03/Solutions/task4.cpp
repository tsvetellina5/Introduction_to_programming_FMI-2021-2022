#include <iostream>
using namespace std;

int main()
{
	int first, second;
	cin >> first >> second;

	if (first < 1 || second < 1)
	{
		cout << "Can't be equal/less than 1" << endl;
		return 1;
	}

	if (first > second) //swap
	{
		int temp = first;
		first = second;
		second = temp;
	}

	for (int i = first; i <= second; i++)
	{
		if (i == 0)
			continue;

		bool isPrime = true;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
			cout << i << " ";
	}

	return 0;
}