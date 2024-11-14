#include <stdio.h>

int main()
{
    int N;
    while (scanf("%d", &N) == 1)
    {
        int arr[1000];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }

        int flip = 0;
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (arr[i] > arr[j])
                {
                    flip++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", flip);
    }

    return 0;
}