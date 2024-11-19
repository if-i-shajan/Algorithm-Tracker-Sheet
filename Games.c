#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int h[100], g[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &h[i], &g[i]);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (h[i] == g[j])
                    cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}