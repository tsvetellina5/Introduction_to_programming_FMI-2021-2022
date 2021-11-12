int sumOfElementsThatDivideN(int *arr, int size,int N)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % N == 0)
			sum += arr[i];
	}
	return sum;
}
