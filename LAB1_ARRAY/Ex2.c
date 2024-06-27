#include <stdio.h>

// To create an array of float{1.5,5.3,8.3,9.7,90.3,33.7} then print to the screen.

int main()
{
    float array[6] = {1.5, 5.3, 8.3, 9.7, 90.3, 33.7};
    printf("Array = ");
    printf("{");
    for (int i = 0; i < 6; i++)
    {
        printf("%.2f,", array[i]);
    }
    printf("\b");
    printf("}");

    return 0;
}