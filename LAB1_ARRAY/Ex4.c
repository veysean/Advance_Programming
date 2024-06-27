#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*To create an array of integer which has 10 elements.  Random number to store the value in
array one by one after that count the odd value from all elements in the array and then display
the result of count and the array to screen using loop. */

int main()
{
    int array[10], rand();
    int oddValue = 0;

    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % (100 + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 != 0)
        {
            oddValue++;
        }
    }

    printf("The odd value in array is %d.\n", oddValue);

    for (int i = 0; i < 10; i++)
    {
        printf("Array [%d] = %d\n", i, array[i]);
    }
    return 0;
}