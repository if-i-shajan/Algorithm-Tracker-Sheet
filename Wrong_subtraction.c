#include <stdio.h>
int main()
{
    long long n, k;
    scanf("%lld %lld", &n, &k);
    while (k > 0)
    {
        if (n % 10 != 0)
        {
            n = n - 1;
        }
        else
        {
            n = n / 10;
        }
        k--;
    }
    printf("%lld\n", n);
    return 0;
}