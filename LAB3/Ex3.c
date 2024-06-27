#include <stdio.h>

// create array integer {{10,20},{40,50},{75,80}} then print to the screen by using loop.

int main()
{
    int array[3][2] = {{10, 20}, {40, 50}, {75, 80}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}