#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n;
    int c = 0;
    scanf("%d %d\n", &n, &m);
    while (m > n)
    {
        if (m % 2 == 0)
        {
            m /= 2;
        }
        else
        {
            m += 1;
        }
        c++;
    }
    c += abs(n - m);
    printf("%d\n", c);
    return 0;
}