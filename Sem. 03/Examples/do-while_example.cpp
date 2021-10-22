#include <iostream>

using namespace std;

int main()
{

	int a = 0, b = 0;
	do
	{
		cout << "value of a: " << a << endl;
		a += 1;
	} while (a > 0); //endless loop

	cout << endl;

	while (b > 0) //b == 0 , no execution
	{
		cout << "value of b: " << b << endl;
		b += 1;
	}
}