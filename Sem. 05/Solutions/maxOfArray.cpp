double maxOfArray(double *arr, int size)
{
	double max = DBL_MIN_EXP;
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}