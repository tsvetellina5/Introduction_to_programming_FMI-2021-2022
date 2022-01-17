unsigned my_strlen(const char* str)
{
	unsigned index = 0;

	while (str[index] != '\0')
		index++;

	return index;
}

void Strcat(char* &dest, const char* source)
{
	unsigned destLength = my_strlen(dest);
	unsigned sourceLength = my_strlen(source);
	unsigned newLength = destLength + sourceLength + 1;

	char* temp = new char[destLength];
	for (int i = 0; i < destLength; i++)
	{
		temp[i] = dest[i];
	}

	delete[] dest;
	dest = new char[newLength];

	for (int i = 0; i < destLength;i++)
	{
		dest[i] = temp[i];
	}

	for (int i = 0; i < sourceLength; i++)
	{
		dest[i + destLength] = source[i];
	}

	dest[newLength - 1] = '\0';

	delete[] temp;
}