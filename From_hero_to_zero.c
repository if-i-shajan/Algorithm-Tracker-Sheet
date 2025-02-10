#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, k;
        scanf("%lld %lld", &n, &k);

        int steps = 0;
        while (n > 0)
        {
            if (n % k == 0)
            {
                n /= k;
                steps++;
            }
            else
            {
                long long remainder = n % k;
                n -= remainder;
                steps += remainder;
            }
        }
        printf("%d\n", steps);
    }
    return 0;
}