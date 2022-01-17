void Revert(long &number)
{
	long reverseNumber = 0;
	int lastDigit = 0;
	while (number > 0)
	{
		lastDigit = number % 10;

		(reverseNumber *= 10) += lastDigit;

		number /= 10;
	}

	number = reverseNumber;
}
