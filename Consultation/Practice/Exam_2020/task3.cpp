unsigned long long pow(int num, unsigned N)
{
	long long result = 1;

	for (size_t i = 0; i < N; i++)
		result *= num;

	return result;
}

bool CheckInput(long N, int n)
{
	return n < 8 && N > 0;
}

unsigned find_digits(long N)
{
	unsigned digits = 0;
	while (N > 0)
	{
		digits++;
		N /= 10;
	}

	return digits;
}

int Find(long N, int n)
{
	unsigned digits = find_digits(N);

	if (!CheckInput(N, n) || digits < n)
		return -1;

	unsigned max = 0;
	digits = pow(10, n);

	while (N / digits > 0)
	{
		unsigned number = N % digits;
		if (max < number)
			max = number;

		N /= 10;
	}

	return (max > N ? max : N);
}
