int** transpose(int** A, int N)
{
	int **arr = new int*[N];
	
	for (int i = 0; i < N; i++)
		arr[i] = new int[N];

	for (int i = 0; i < N; i++)
		for (int y = 0; y < N; y++)
			arr[i][y] = A[y][i];

	return arr;
}