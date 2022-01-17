int** matrix(int M, int N)
{
	int** arr = new int *[N];
	for (int i = 0; i < N; i++)
		arr[i] = new int[N];

	for (int i = 0; i < N; i++)
	{
		for (int y = 0; y < N; y++)
		{
			if (i == y)
				arr[i][y] = M;
			else
				arr[i][y] = 0;
		}
	}
	
	return arr;
}