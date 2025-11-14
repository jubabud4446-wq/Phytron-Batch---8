#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int init_spaces = (n + 9) / 2;
    int top_rows = init_spaces + 1;

    for (int i = 0; i < top_rows; i++)
    {
        for (int j = 0; j < init_spaces - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}