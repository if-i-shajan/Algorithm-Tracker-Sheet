#include <stdio.h>
#include <math.h>

int binary(int a, long long b)
{
    int ans = 0;
    int cnt = 0;

    while (b != 0)
    {
        if (b % 10 == 1)
        {
            ans += (int)pow(2, cnt);
        }
        b = b / 10;
        cnt++;
    }
    return ans == a;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int a, b, c, d;
        char l;
        scanf("%d%c%d%c%d%c%d", &a, &l, &b, &l, &c, &l, &d);

        long long p, q, r, s;
        scanf("%lld%c%lld%c%lld%c%lld", &p, &l, &q, &l, &r, &l, &s);
        if (binary(a, p) && binary(b, q) && binary(c, r) && binary(d, s))
        {
            printf("Case %d: Yes\n", i);
        }
        else
        {
            printf("Case %d: No\n", i);
        }
    }
    return 0;
}