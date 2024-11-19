#include <stdio.h>
int main()
{
    int ln[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int flag = 0;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 14; i++)
    {
        if (n % ln[i] == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}