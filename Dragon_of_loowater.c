#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    int int_a = *(int *)a;
    int int_b = *(int *)b;

    return int_a - int_b;
}

int main()
{
    int n, m;

    while (1)
    {

        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0)
            break;

        int dragonHeads[n], knights[m];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &dragonHeads[i]);
        }

        for (int i = 0; i < m; i++)
        {
            scanf("%d", &knights[i]);
        }

        qsort(dragonHeads, n, sizeof(int), compare);
        qsort(knights, m, sizeof(int), compare);

        int totalGold = 0, dIndex = 0, kIndex = 0;

        while (dIndex < n && kIndex < m)
        {
            if (knights[kIndex] >= dragonHeads[dIndex])
            {

                totalGold += knights[kIndex];
                dIndex++;
            }
            kIndex++;
        }
        if (dIndex == n)
        {
            printf("%d\n", totalGold);
        }
        else
        {
            printf("Loowater is doomed!\n");
        }
    }
    return 0;
}