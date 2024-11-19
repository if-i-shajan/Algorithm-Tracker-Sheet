#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int n;
    int a[200000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), compare);

    int current = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= current)
        {
            current++;
        }
    }
    printf("%d\n", current - 1);
    return 0;
}