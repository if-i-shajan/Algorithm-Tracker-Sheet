#include <stdio.h>
int main()
{
    int n, e;
    scanf("%d", &n);
    int s1 = 0, s2 = 0, s3 = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &e);
        s1 += e;
    }

    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &e);
        s2 += e;
    }

    for (int i = 0; i < n - 2; i++)
    {
        scanf("%d", &e);
        s3 += e;
    }
    printf("%d\n", s1 - s2);
    printf("%d\n", s2 - s3);

    return 0;
}
