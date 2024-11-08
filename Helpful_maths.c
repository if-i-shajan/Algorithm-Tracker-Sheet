#include <stdio.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int count[4] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '1')
        {
            count[1]++;
        }
        else if (s[i] == '2')
        {
            count[2]++;
        }
        else if (s[i] == '3')
        {
            count[3]++;
        }
    }
    
    // Non-decreasing order
    int first = 1;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            if (!first)
            {
                printf("+");
            }
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}