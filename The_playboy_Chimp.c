#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int q;
    scanf("%d", &q);
    int l[q];
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &l[i]);
    }

    for (int i = 0; i < q; i++)
    {
        int luchu = l[i];

        int mx = INT_MIN;
        int mn = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if (a[j] < luchu && a[j] > mx)
            {
                mx = a[j];
            }
            if (a[j] > luchu && a[j] < mn)
            {
                mn = a[j];
            }
        }
        if (mx == INT_MIN)
        {
            printf("X ");
        }
        else
        {
            printf("%d ", mx);
        }

        if (mn == INT_MAX)
        {
            printf("X\n");
        }
        else
        {
            printf("%d\n", mn);
        }
    }
    return 0;
}