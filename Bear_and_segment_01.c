// Partial Accepted
#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[1001];
        scanf("%s", s);

        int f1 = -1, f2 = -1;
        int len = strlen(s);
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '1')
            {
                if (f1 == -1)
                {
                    f1 = i;
                }
                f2 = i;
            }
        }
        if (f1 == -1)
        {
            printf("NO\n");
            continue;
        }
        int f = 1;
        for (int i = f1; i <= f2; i++)
        {
            if (s[i] == '0')
            {
                f = 0;
                break;
            }
        }
        if (f)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}