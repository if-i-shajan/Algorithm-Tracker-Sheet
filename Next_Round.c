#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a[m - 1] && a[i] > 0)
        {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}