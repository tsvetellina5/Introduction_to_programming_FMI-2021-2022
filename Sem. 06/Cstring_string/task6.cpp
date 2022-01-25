#include <iostream>

size_t my_strlen(const char* str)
{
	size_t length = NULL;
	while (str[length] != '\0')
		length++;
	return length;
}

void print_size(size_t arr1_size, size_t arr2_size)
{
	std::cout << arr1_size << " " << arr2_size << std::endl;
}

char* my_strcat(const char* dest, const char* source,size_t destSize, size_t sourceSize,size_t newSize)
{
	char* concatenation = new char[newSize];

	for (size_t i = 0; i < destSize; i++)
		concatenation[i] = dest[i];

	for (size_t y = 0; y < sourceSize; y++)
		concatenation[destSize + y] = source[y];

	concatenation[newSize - 1] = '\0';
	return concatenation;
}

void to_upper(char* const str)
{
	size_t index = 0;
	while (str[index] != '\0')
		str[index++] -= 32;
}

void print(const char* str)
{
	std::cout << str << std::endl;
}

int main()
{
	char arr1[] = "abcd";
	char arr2[] = "ef";

	size_t arr1_size = my_strlen(arr1);
	size_t arr2_size = my_strlen(arr2);
	size_t arr3_size = arr1_size + arr2_size + 1;

	char* arr3 = my_strcat(arr1, arr2, arr1_size, arr2_size,arr3_size);

	print_size(arr1_size, arr2_size);
	print(arr3);
	to_upper(arr3);
	print(arr3);
	
	delete[] arr3;
}
