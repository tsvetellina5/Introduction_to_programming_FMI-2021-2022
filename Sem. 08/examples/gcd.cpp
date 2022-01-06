//gcd(Greatest common divisor
int gcd(const int a, const int b)
{
    if (a < b)
        return gcd(a, a - b)

    if (a > b)
        return gcd(a – b, a);

    return a;
}
