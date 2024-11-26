#include <stdio.h>
int main()
{
    int n;

    while (1)
    {
        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }
        long long work = 0;
        long long current_balance = 0;

        for (int i = 0; i < n; i++)
        {
            int wine;
            scanf("%d", &wine);

            current_balance += wine;
            if (current_balance < 0)
            {
                work -= current_balance;
            }
            else
            {
                work += current_balance;
            }
        }
        printf("%lld\n", work);
    }
    return 0;
}