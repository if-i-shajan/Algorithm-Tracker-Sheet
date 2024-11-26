#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int numbers[n];
    int evenCount = 0, oddCount = 0;
    int evenPosition = 0, oddPosition = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0)
        {
            evenCount++;
            evenPosition = i + 1;
        }
        else
        {
            oddCount++;
            oddPosition = i + 1;
        }
    }
    if (evenCount == 1)
    {
        printf("%d\n", evenPosition);
    }

    else
    {
        printf("%d\n", oddPosition);
    }
    return 0;
}