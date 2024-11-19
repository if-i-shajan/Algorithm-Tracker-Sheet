#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);

    for (int i = 0, g = 1; i < n; i += g, g++)
    {
        printf("%c", s[i]);
    }
    return 0;
}