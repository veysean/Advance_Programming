#include <stdio.h>

/*Create a 2-dimension array of integer which has 2 row and 3 columns. Get input from user to
store the value in array one by one then loop to access array to display to screen.*/

int main()
{
    int array[2][3];

    printf("Enter element of 2x3 matrix :\n ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            scanf("%d %d %d", &array[i][j], &array[i][j + 1], &array[i][j + 2]);
        }
    }

    printf("The matrix 2x3 is : \n");

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