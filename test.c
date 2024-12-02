#include <stdio.h>
void main()
{
    int ch = 65;
    int n, ch1;

    printf("enter the number of rows : ");
    scanf("%d", &n);

    ch1 = ch + n - 3;
    int ch2 = ch + n - 1;

    for (int i = ch; i <= ch2; i++)
    {
        printf("%c", i);
    }
    printf("\n");
    int k = n / 2 + 1;
    for (int j = 1; j <= n / 2; j++)
    { // for printing the first pyramid
        for (int k = 1; k <= j; k++)
        {
            printf(" ");
        }
        printf("%c", ch);

        for (int i = 1; i <= k; i++)
        {
            printf(" ");
        }
        k = k - 2;
        if (j == n / 2)
        {
            printf(" ");
        }
        else
        {
            printf("%c", ch1);
        }
        ch1 = ch1 - 2;
        printf("\n");
    }
    k = 1;
    ch1 = ch1 + 2;
    for (int i = 0; i < (n / 2 - 1); i++)
    { // for printing the second pyramid

        for (int j = 1; j <= (n / 2 - 1) - i; j++)
        {
            printf(" ");
        }
        printf("%c", ch);

        for (int i = 1; i <= k; i++)
        {
            printf(" ");
        }
        k = k + 2;
        ch1 = ch1 + 2;
        printf("%c", ch1);
        printf("\n");
    }

    for (int i = ch; i <= ch2; i++)
    {
        printf("%c", i);
    }
}