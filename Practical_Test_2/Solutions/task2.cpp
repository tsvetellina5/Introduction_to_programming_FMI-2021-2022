#include <iostream>

const char INVALID_SYMBOL = '-';
const int FIRST_LETTER_ASCII = 97;

size_t myStrlen(char *str)
/*
В C++ всеки символен низ завършва със специален знак '\0' - терминираща нула,
която показва къде е края на низа. Използвайки този знак, ние отброяваме с цикъл
символите преди него и по този начин извеждаме дължината на символния низ
*/
{       
	size_t len = 0;;
	while (str[len] != '\0') len++;
	return len;
}

bool isLower(char ch)
/*
Помощна функция, която проверява дали даден символ е малка латинска буква
*/
{
	return ('a' <= ch && ch <= 'z');
}

bool existCode(char *s1, char *r1, char *&ptr)
{
	/*
	 на адреса &ptr ще върнем пойнрът към динамично заделения масив 
	 където сме съхранили кой символ с какъв се кодира
	*/
	size_t len_s1 = myStrlen(s1);
	size_t len_r1 = myStrlen(r1);

	/*
	ако дължините на низа s1 и кодирания му низ r1 не съвпадат, 
	значи такова кодиране не съществува 
	*/
	if (len_s1 != len_r1)
		return false;

	/*
	Създаваме си един масим с големина 26 + 1,
	това са броя на малките латински букви плюс празното разстояние.
	Създаваме го динамично, за да може да го ползваме после 
	*/
	char *arr = new char[26 + 1];

	//запълваме го с някой от непозволените символи
	memset(arr, INVALID_SYMBOL, 26 + 1);
	ptr = arr;

	//Дължините са еднакви и може да въртим цикъл до която и да е от тях
	for (size_t i = 0; i < len_s1; i++)
	{
		if (isLower(s1[i]))
		{
			/*
			Ако на този символ от s1 няма кодиращ символ
			слагаме кодиращоия му символ в масива arr на позиция отговаряща 
			на мястото на символа в азбуката, което е символа минус 97-ASCII кода на първата буква от азбуката
			*/
			if (arr[(int)s1[i] - FIRST_LETTER_ASCII] == INVALID_SYMBOL)
			{
				arr[(int)s1[i] - FIRST_LETTER_ASCII] = r1[i];
			}
			/*
			В противен случай такъв символ вече е сложен и ако новия,
			който се опитваме да сложим е различен, значи такова кодиране не съществува
			*/
			else
			{
				if (r1[i] != arr[(int)s1[i] - FIRST_LETTER_ASCII])
					return false;
			}
		}
		else
		/*
		След като не е малка латинска буква, то тогава ще е празната клетка,
		тъй като по условие низовете са само малки латински букви или празната клетка 
		*/
		{
			if (arr[26] == INVALID_SYMBOL) //празната клетка е с фиксирана позиция 26-последната в масива arr 
				arr[26] = r1[i];
			else if (arr[26] != r1[i])
				return false;
		}
	}
	
	//ако сме изциклили веднъж през цялата дължина -> съществува такова кодиране
	return true;
}

void encode(char s1[], char r1[], char s2[])
{
	size_t len = myStrlen(s2);
	char *result = new char[len + 1];

	for (size_t i = 0; i < len; i++)
		result[i] = s2[i];

	result[len] = '\0';

	/*
	Aко съществува такова кодиране, то най-удобно
	ще е дефолтната стойност на кодирания низ да е
	същата като низа, който ще кодираме. (Защо?)
	*/
	char *ptr;
	if (existCode(s1, r1, ptr))
	{
		for (size_t i = 0; i < myStrlen(s2); i++)
		{
			if (isLower(s2[i]))
			{
				if (ptr[(int)s2[i] - FIRST_LETTER_ASCII] != INVALID_SYMBOL)
				{
					result[i] = ptr[(int)s2[i] - FIRST_LETTER_ASCII];
				}
			}
			else
			{
				/*
				щом сме тук значи символа не е малка буква и от условието следва, 
				че е празната клетка, която се кодира със символ с фиксирана позиция 
				в масива arr, за който знаем че ptr сочи към него
				*/
				result[i] = ptr[26];
			}
		}
		std::cout << "Coded word is: " << result << std::endl;
	}
	else
	{
		delete result;
		result = new char[1];
		result[0] = '\0';
		std::cout << "No such encoding exists!\n";
		std::cout << "The empty string: " << result << std::endl;
	}
	delete[] ptr; // изтриваме масива с информацията за декриптирането
	delete[] result; // изтриваме резултата след като сме го принтирали на конзолата
}

int main() {
	char s1[] = "hello";
	char r1[] = "worrd";
	char s2[] = "love";
	encode(s1, r1, s2); // четвърти аргумент е излишен	
	return 0;
}