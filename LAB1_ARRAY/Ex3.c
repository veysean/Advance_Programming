#include <stdio.h>

/* To create an array integer which has 5 elements. Get input from user to store the values in
element of array one by one by using loop. After that  access all element of the array to display
to screen using loop.*/

int main()
{
    int array[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Input value of array index [%d] = ", i);
        scanf("%d", &array[i]);
    }
    printf("The result of input the value of array.\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Array[%d] = %d \n", i, array[i]);
    }

    return 0;
}