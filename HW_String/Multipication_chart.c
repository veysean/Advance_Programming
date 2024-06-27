#include <stdio.h>

int main()
{

    int result = 0;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            result = i * j;
            printf("%d X %d = %d\n", i, j, result);
        }
        printf("\n");
    }

    return 0;
}