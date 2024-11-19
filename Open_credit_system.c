#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int mx = INT_MIN;
        int sd = a[0];

        for (int k = 1; k < n; k++)
        {
            int diff = sd - a[k];
            if (diff > mx)
            {
                mx = diff;
            }
            if (sd < a[k])
            {
                sd = a[k];
            }
        }
        printf("%d\n", mx);
    }
    return 0;
}