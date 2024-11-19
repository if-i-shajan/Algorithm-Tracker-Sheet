#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("HARD\n");
    }
    else
    {
        printf("EASY\n");
    }

    return 0;
}