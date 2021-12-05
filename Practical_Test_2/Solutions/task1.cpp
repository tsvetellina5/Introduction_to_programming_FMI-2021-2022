#include <iostream>

// функция, която проверява дали сбора на две от три числа е равен на третото
bool checkCondition(unsigned long a, unsigned long b, unsigned long c)
{
	return (a == b + c) || (b == c + a) || (c == a + b);
}

void output(int number1, int number2, int number3)
{
	std::cout << '(' << number1 << ',' << number2 << ',' << number3 << ")\n";
}

unsigned long countSums(long arr1[], size_t len1, long arr2[], size_t len2, long arr3[], size_t len3) {
	unsigned long counter = 0;
	for (size_t i = 0; i < len1; i++)
	{
		for (size_t j = 0; j < len2; j++)
		{
			for (size_t k = 0; k < len3; k++)
			{
				if (checkCondition(arr1[i], arr2[j], arr3[k])) {
					counter++;
					output(arr1[i], arr2[j], arr3[k]);
				}
			}
		}
	}
	return counter;
}

int main() {
	long arr1[] = { 1, 5, 3 };
	size_t len1 = sizeof(arr1) / sizeof(arr1[0]);
	long arr2[] = { 2, 4 };
	size_t len2 = sizeof(arr2) / sizeof(arr2[0]);
	long arr3[] = { 6, 4, 3 };
	size_t len3 = sizeof(arr3) / sizeof(arr3[0]);

	std::cout << countSums(arr1, len1, arr2, len2, arr3, len3);
	return 0;
}