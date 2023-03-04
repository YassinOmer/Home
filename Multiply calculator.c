#include <stdio.h>

int main(void)
{
    int num1, num2, lines, multi;
    char yn;
    while (1)
    {
        printf("\nDo you want to multiply y or n?\n");
        scanf("%c", &yn);
        if(yn = "y")
        {
        printf("\nEnter a number to multiply:\n");
        scanf("%d", &num1);
        printf("Enter number of multiplication lines:\n");
        scanf("%d", &lines);
        // To repeat lines and multiply
        for (num2 = 0; num2 <= lines; num2++)
        {
            multi = num1 * num2;
            printf("\n%d * %d = %i", num1, num2, multi);
        }
        }
        else if(yn = "n")
        {
            return 0;
        }

    }
}
