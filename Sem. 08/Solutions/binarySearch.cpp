bool binarySearch(const int* arr, unsigned size, int num)
{
	if (size == 0)
		return false;

	unsigned mid = size / 2;

	if (arr[mid] == num)
		return true;

	if (arr[mid] > num)
		return binarySearch(arr, mid, num);
	
	return binarySearch(arr + mid + 1, size - mid - 1, num);
}