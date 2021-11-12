#include <iostream>

int input(int *arr)
{
	int size = 0;
	while (std::cin >> arr[size])
	{
		size++;
	}
	return size;
}
