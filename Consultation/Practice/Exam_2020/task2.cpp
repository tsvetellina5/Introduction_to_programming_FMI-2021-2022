unsigned my_strlen(const char* str)
{
	unsigned index = 0;

	while (str[index] != '\0')
		index++;

	return index;
}

int max(int f, int s)
{
	return (f > s ? f : s);
}

int GetWord(char str[])
{
	unsigned length = my_strlen(str);

	int temp = 0;
	int newLength = 0;

	for (size_t i = 0; i < length; i++)
	{
		if (str[i] != ' ')
			newLength++;
		else {
			temp = max(temp, newLength);
			newLength = 0;
		}
	}
	return max(temp, newLength);
}