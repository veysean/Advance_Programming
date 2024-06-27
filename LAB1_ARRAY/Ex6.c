#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*To create an array of integer which has 20 elements.  Random number to store the value in
array one by one. Ask used to input a number the search if a number exist in the array. Print
the index of array if a the number exist at any index and print a message “ the number not
found “ when the number not exist.  */

int main()
{
    int rand(), array[20];
    int num;

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        array[i] = rand() % (100 + 1);
    }

    printf("Input number for searching in array : ");
    scanf("%d", &num);

    for (int i = 0; i < 20; i++)
    {
        if (num == array[i])
        {
            printf("This number found in index %d .", i);
            return 0;
        }
    }
    printf("The number not found !!!");

    return 0;
}