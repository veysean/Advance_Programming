#include <stdio.h>

// To create an array of integer {1,9,5,10,3} then print to the screen by using loop.

int main()
{
    int array[] = {1, 9, 5, 10, 3};
    printf("Array = ");
    printf("{");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", array[i]);
    }
    printf("\b");
    printf("}");

    return 0;
}