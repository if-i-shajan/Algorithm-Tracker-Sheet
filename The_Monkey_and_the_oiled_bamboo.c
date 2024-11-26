#include <stdio.h>
#include <stdbool.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int b[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[j]);
        }

        int l = 1, h = b[n - 1], ans = h;

        while (l <= h)
        {
            int mid = (l + h) / 2;
            int k = mid, in = 0;
            bool flag = true;

            for (int j = 0; j < n; j++)
            {
                int dif = b[j] - in;
                if (dif > k)
                {
                    flag = false;
                    break;
                }
                if (dif == k)
                    k--;
                in = b[j];
            }

            if (flag)
            {
                ans = mid;
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        printf("Case %d: %d\n", i, ans);
    }
    return 0;
}