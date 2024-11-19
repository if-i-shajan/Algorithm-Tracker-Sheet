#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int cnt = 0;
    while (a > 0)
    {
        a = a / b;
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}