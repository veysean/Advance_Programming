#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*create an array integer a1 which has 10 elements. Get input from user to store the value in
array one by one then create another array a2 to store the value of array a1 in reverse order
after that loop to access array a1 and a2 to display to screen. */

int main()
{
    int a1[10], a2[10];
    int rand();
    int j = 0;

    srand(time(NULL));

    // Randomly assign value to array a1
    for (int i = 0; i < 10; i++)
    {
        a1[i] = rand() % 10;
    }

    // store value in array a2 by reverse of a1
    for (int i = 9; i >= 0; i--)
    {
        a2[j] = a1[i];
        j++;
    }

    // Display array a1
    printf("Array a1 : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\n");

    // Display array a2
    printf("Array a2 (reverse order of a1) : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a2[i]);
    }

    return 0;
}