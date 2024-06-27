#include <stdio.h>

// Create array float{{11,12.5,13.2},{2.1,2.2,2.3},{3,3.1,3.3}} then print to the screen by using loop.

int main()
{
    float array[3][3] = {{11, 12.5, 13.2},
                         {2.1, 2.2, 2.3},
                         {3, 3.1, 3.3}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.1f\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}