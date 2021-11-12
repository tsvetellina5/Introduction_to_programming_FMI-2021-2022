void swap(int &f, int &s)
{
	int temp = f;
	f = s;
	s = temp;
}

void bubbleSort(int *arr, int size)
{
	bool swapped;
	for (int i = 0; i < size; i++)
	{
		swapped = false; //Restart Flag
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		if (!swapped) //If no Swaps accured - End bubbleSort
			break;
	}
}
