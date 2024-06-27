#include <stdio.h>

// To transpose matrix 3X3 like the following m= {{3,8,1},{0,6,2},{4,5,9}}

int main()
{
    int matrix[3][3] = {{3, 8, 1},
                        {0, 6, 2},
                        {4, 5, 9}};

    printf("The transpose matrix 3X3 is : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}