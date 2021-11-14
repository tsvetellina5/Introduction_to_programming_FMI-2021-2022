#include <iostream>
#include <cmath>
using namespace std;

const int LOWER_BORDER = -100;
const int UPPER_BORDER = 100;


int main()
{
	long a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	for (int i = LOWER_BORDER; i <= UPPER_BORDER; i++)
	{

		long long polinom = (a * pow(i, 4)) + (b * pow(i, 3)) + (c * pow(i, 2)) + (d * i) + e;
		if (polinom >= 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}