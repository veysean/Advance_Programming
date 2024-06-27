#include <stdio.h>

/*To create a program to do an operation add for 2 matrix (3X3)  m=m1+m3; create matrix m1
and m2 one by one  using user input data. The calculate m base on m1 and m2. Finally print all
matrix m1, m2, and m. */

int main()
{
    int matrix1[3][3], matrix2[3][3], matrix[3][3];

    printf("Insert Matrix 1 (3X3)\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            scanf("%d %d %d", &matrix1[i][j], &matrix1[i][j + 1], &matrix1[i][j + 2]);
        }
    }

    printf("Insert Matrix 2 (3X3)\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            scanf("%d %d %d", &matrix2[i][j], &matrix2[i][j + 1], &matrix2[i][j + 2]);
        }
    }

    printf("Matrix 1 :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2 :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("The sum of matrix 1 and 2 is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}