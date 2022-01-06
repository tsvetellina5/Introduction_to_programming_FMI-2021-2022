//Returns the sum of all numbers from 0 to a given integer
int sumRange(int num)
{
    if (num == 0)
        return 0;
	
    return num + sumRange(num - 1);
}
