#include <stdio.h>

/*Create an array integer which has 5 elements. Get input from user to store the value in array
one by one then loop to access array to display to screen in reverse order. */

int main()
{
    int array[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Input value of array index %d : ", i);
        scanf("%d", &array[i]);
    }

    printf("Reverse of array.\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("Array[%d] = %d\n", 4 - i, array[i]);
    }
    return 0;
}