bool linearSearch(const int* arr, unsigned size, int num)
{
	if (size == 0)
		return false;
	
	return *arr == num || linearSearch(arr + 1, size - 1, num);
}