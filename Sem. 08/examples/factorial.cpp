//Return the factorial of n
int fact(const int n)
{    
    if (n == 0)
         return 1;

    return n * fact(n - 1);
}
