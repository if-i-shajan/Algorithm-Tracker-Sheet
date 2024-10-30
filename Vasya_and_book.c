#include <stdio.h>
#include <stdlib.h>

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long n, x, y, d; // The number of pages (n), the current page (x), the target page (y), and the scroll distance (d)
        scanf("%lld %lld %lld %lld", &n, &x, &y, &d);

        long long result = -1; // Initialize result as -1, indicating it is initially not possible to reach the target page

        // Check if the target page can be reached directly by scrolling in steps of d
        if (abs(y - x) % d == 0)
        {
            result = abs(y - x) / d; // Calculate the number of button presses needed
        }
        else
        {
            // Check if the target page can be reached indirectly via page 1
            if ((y - 1) % d == 0)
            {
                long long press_1 = (y - 1) / d + (x - 1 + d - 1) / d;
                result = press_1;
            }

            // Check if the target page can be reached indirectly via the last page (n)
            if ((n - y) % d == 0)
            {
                long long press_n = (n - y) / d + (n - x + d - 1) / d;
                if (result == -1 || press_n < result)
                {
                    result = press_n;
                }
            }
        }
        printf("%lld\n", result);
    }
    return 0;
}