#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n + 1], t[n + 1];
    scanf("%s", s);
    scanf("%s", t);

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int a = s[i];
        int b = t[i];
        int d = abs(a - b);
        if (d < (10 - d))
        {
            cnt += d;
        }
        else
        {
            cnt += (10 - d);
        }
    }
    printf("%d\n", cnt);
    return 0;
}