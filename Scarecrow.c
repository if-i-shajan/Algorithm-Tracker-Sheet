#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);

        char s[n + 1];
        scanf("%s", s);

        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '.')
            {
                cnt++;
                j = j + 2;
            }
        }
        printf("Case %d: %d\n", i, cnt);
    }
    return 0;
}