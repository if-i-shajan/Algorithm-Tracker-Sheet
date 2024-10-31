#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int j = 0; j < n; j++)
            scanf("%d", &a[j]);

        int max = a[0];
        for (int j = 1; j < n; j++)
        {
            if (a[j] > max)
            {
                max = a[j];
            }
        }
        printf("Case %d: %d\n", i, max);
    }
    return 0;
}