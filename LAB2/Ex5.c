#include <stdio.h>

/*Create a program to do an operation multiply for 2 matrix (3X3) m=m1*m2; create matrix m1
and m2 one by one using user input data. The calculate m base on m1 and m2. Finally print all
matrix m1, m2, and m.*/

int main()
{
    int m[3][3], m1[3][3], m2[3][3], mul[3][3];

    // Input matrix 1
    printf("Enter element of 3x3 matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            scanf("%d %d %d", &m1[i][j], &m1[i][j + 1], &m1[i][j + 2]);
        }
    }

    // Input matrix 2
    printf("Enter element of 3x3 matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            scanf("%d %d %d", &m2[i][j], &m2[i][j + 1], &m2[i][j + 2]);
        }
    }

    // Multiply matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                mul[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Display m1
    printf("Matrix 1 : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }

    // Display m2
    printf("Matrix 2 : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }

    // Display result of matrix multiplication
    printf("Multiplication of matrix m1 and m1 : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}