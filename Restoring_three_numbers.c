#include <stdio.h>
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int a = arr[3] - arr[2];
    int b = arr[3] - arr[1];
    int c = arr[3] - arr[0];

    printf("%d %d %d\n", a, b, c);
    return 0;
}