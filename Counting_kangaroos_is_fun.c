#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), compare);

    int l = 0, r = n / 2;
    int cnt = n;
    while (l < n / 2 && r < n)
    {
        if (a[r] >= 2 * a[l])
        {
            cnt--;
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}