#include <stdio.h>
// Create array integer{{11,12,13},{21,22,23}} then print to the screen by using loop.

int main()
{
    int array[2][3] = {{11, 12, 13},
                       {21, 22, 23}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}