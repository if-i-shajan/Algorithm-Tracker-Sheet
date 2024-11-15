#include <stdio.h>
int main()
{
    int n, k;

    while (scanf("%d %d", &n, &k) != EOF)
    {
        int totalCig = n;
        int butts = n;

        while (butts >= k)
        {

            int newCig = butts / k;

            totalCig = totalCig + newCig;

            butts = (butts % k) + newCig;
        }

        printf("%d\n", totalCig);
    }
    return 0;
}