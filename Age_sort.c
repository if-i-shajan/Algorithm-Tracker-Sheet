#include <stdio.h>
#define MAX_AGE 100

int main()
{
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;

        int count[MAX_AGE] = {0};
        for (int i = 0; i < n; i++)
        {
            int age;
            scanf("%d", &age);
            count[age]++;
        }
        int first = 1;
        for (int i = 1; i < MAX_AGE; i++)
        {
            for (int j = 0; j < count[i]; j++)
            {
                if (!first)
                    printf(" ");
                printf("%d", i);
                first = 0;
            }
        }
        printf("\n");
    }
    return 0;
}