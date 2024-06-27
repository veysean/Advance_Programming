#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, k;
    int a[3][3], b[3][3], mul[3][3];

    // Seed the random number generator
    srand(time(NULL));

    // Generate random values for matrix A
    printf("Randomly generated matrix A:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            a[i][j] = rand() % 10;
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Generate random values for matrix B
    printf("\nRandomly generated matrix B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            b[i][j] = rand() % 10;
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // Multiply matrices A and B
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            mul[i][j] = 0;
            for (k = 0; k < 3; k++) 
             {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display the multiplied matrix
    printf("\nMultiplied matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}