#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*Create an array integer which has 20 elements.  Random number to store the value in array one
by one after that calculate the average value from odd elements(odd index, 0 not include in
odd index) in the array and then display the result of calculation and the array to screen using
loop. */

int main()
{
    int array[20];
    float sum = 0;
    int rand(),odd;

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        array[i] = rand() % 10;
        if (i % 2 == 1)
        {
            sum = sum + array[i];
            odd++;
        }
    }
    printf("The Sum of odd index : %.2f\n ", sum / odd);

    for (int i = 0; i < 20; i++)
    {
        printf("Array[%d] = %d\n", i, array[i]);
    }

    return 0;
}