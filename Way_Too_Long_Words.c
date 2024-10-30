#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char word[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", word);
        int length = strlen(word);

        if (length > 10)
        {
            printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
        }
        else
        {
            printf("%s\n", word);
        }
    }
    return 0;
}