#include <stdio.h>

void main()
{
    int n;
    printf("Enter the widht of pattern: ");
    scanf("%d", &n);

    for (int i = 0; i < (n + 1) / 2; i++)
    {
        int x = (int)'A';
        if (i == 0)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%c", x++);
            }
            printf("\n");
        }
        else
        {
            for (int j = 0; j < i; j++)
            {
                printf(" ");
            }
            x = (int)'A';
            for (int j = 0; j < n - 2 * (i); j++)
            {
                if (j == 0 || j == ((n - 2 * (i)) - 1))
                {
                    printf("%c", x++);
                }
                else
                {
                    printf(" ");
                    x++;
                }
            }
            printf("\n");
        }
    }

    for (int i = 0; i < ((n + 1) / 2) - 1; i++)
    {
        for (int j = 0; j < ((n + 1) / 2) - 2 - i; j++)
        {
            printf(" ");
        }
        int x = (int)'A';
        if (i == ((n + 1) / 2) - 2)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%c", x++);
            }
            printf("\n");
        }
        else
        {
            for (int j = 0; j < 3 + 2 * i; j++)
            {
                if (j == 0 || j == 2 + 2 * i)
                {
                    printf("%c", x++);
                }
                else
                {
                    printf(" ");
                    x++;
                }
            }
            printf("\n");
        }
    }
}