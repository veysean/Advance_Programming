#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Create an array integer which has 20 elements. Random number to store the value in array one
by one. Print the array to screen after that Sort the value of the array from smallest to the
largest then print to the screen. */

int main()
{
    int array[20];
    int rand();
    int com = 0;

    srand(time(NULL));

    // randomly assign value to array
    printf("Array of 20 element.\n");
    for (int i = 0; i < 20; i++)
    {
        array[i] = rand() % 10;
        printf("%d  ", array[i]);
    }
    printf("\n");

    // sort value in array
    for (int i = 0; i < 19; i++)
    {
        for (int j = i + 1; j < 20; j++)
        {
            if (array[i] > array[j])
            {
                com = array[i];
                array[i] = array[j];
                array[j] = com;
            }
        }
    }

    // display sort of array
    printf("Array after sort :\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d  ", array[i]);
    }

    return 0;
}