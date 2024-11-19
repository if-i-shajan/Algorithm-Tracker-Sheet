#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[1001];
    scanf("%s", s);

    int cnt = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '8')
        {
            cnt++;
        }
    }

    int d = len / 11;
    int req = cnt;

    if (cnt < d)
    {
        printf("%d\n", cnt);
    }
    else
    {
        printf("%d\n", d);
    }
    return 0;
}