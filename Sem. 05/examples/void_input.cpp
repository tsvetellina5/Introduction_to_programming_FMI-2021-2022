#include <iostream>

void input(const int *arr, int &size)
{
	int temp = 0;
	while (std::cin >> arr[temp])
	{
		size++;
		temp++;
	}
}
