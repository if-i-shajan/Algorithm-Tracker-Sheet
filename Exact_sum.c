#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int t;
        scanf("%d", &t);

        qsort(a, n, sizeof(int), compare);
        int l = 0, r = n - 1;
        int b = 0, c = 0;
        while (l < r)
        {
            int s = a[l] + a[r];

            if (s == t)
            {
                b = a[l];
                c = a[r];
                l++;
                r--;
            }
            else if (s < t)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n", b, c);
    }
    return 0;
}