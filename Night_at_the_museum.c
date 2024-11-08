#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int total_spin = 0;
    char current_letter = 'a';

    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) // use insted of str[i] != '\0'
    {
        char target = str[i];

        // Clockwise
        int clockwise;
        if (target >= current_letter)
        {
            clockwise = target - current_letter;
        }
        else
        {
            clockwise = (target + 26) - current_letter;
        }

        // AntiClockwise
        int anti_clockwise;
        if (current_letter >= target)
        {
            anti_clockwise = current_letter - target;
        }
        else
        {
            anti_clockwise = (current_letter + 26) - target;
        }

        // Total
        if (clockwise < anti_clockwise)
        {
            total_spin += clockwise;
        }
        else
        {
            total_spin += anti_clockwise;
        }

        current_letter = target;
    }
    printf("%d\n", total_spin);
    return 0;
}