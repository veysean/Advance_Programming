#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*To create an array of integer which has 20 elements. Create the menu for the following menu:
1) Random number to store the value in elements of array
2) Access the element one by one then display to screen
3) Find and display the value element which the biggest number
4) Find and display the value element which the smallest number
5) Calculate and display the average value of overall the array elements
6) Exit program
Hint: Each option needs to create a function except the option number 6. Program will start
with the menu above unless user chooses option number 6. */

int array[20];
void randomNumber();
void access();
int biggestNumber(int bigNumber);
int smallestNumber(int smallNumber);
float averageNumber(float avg);
void end();

int main()
{
    int result;
    int option;

    while (1)
    {
        printf("1) Random number to store the value in elements of array.\n");
        printf("2) Access the element one by one then display to screen.\n");
        printf("3) Find and display the value element which the biggest number.\n");
        printf("4) Find and display the value element which the smallest number.\n");
        printf("5) Calculate and display the average value of overall the array elements.\n");
        printf("6) Exit program.\n");

        printf("Input number of option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            randomNumber();
            break;
        case 2:
            access();
            break;
        case 3:
            result = biggestNumber(array[20]);
            printf("%d", result);
            printf("\n");
            break;
        case 4:
            result = smallestNumber(array[20]);
            printf("%d", result);
            printf("\n");
            break;
        case 5:
            result = averageNumber(array[20]);
            printf("%.2f", (float)result);
            printf("\n");
            break;
        case 6:
            end();
            break;
        default:
            printf("There only 6 option.\n");
            break;
        }
    }
    return 0;
}

void randomNumber()
{
    int rand();
    srand(time(NULL));
    for (int i = 0; i < 20; i++)
    {
        array[i] = rand() % (100 + 1);
        printf("%d ", array[i]);
    }
    printf("\n");
}

void access()
{
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int biggestNumber(int bigNumber)
{
    bigNumber = array[0];
    for (int i = 0; i < 20; i++)
    {
        if (array[i] > bigNumber)
        {
            bigNumber = array[i];
        }
    }

    return bigNumber;
}

int smallestNumber(int smallNumber)
{
    smallNumber = array[0];
    for (int i = 0; i < 20; i++)
    {
        if (array[i] < smallNumber)
        {
            smallNumber = array[i];
        }
    }

    return smallNumber;
}

float averageNumber(float avg)
{
    int sum;
    for (int i = 0; i < 20; i++)
    {
        sum = sum + array[i];
    }
    avg = (float)sum / 20;

    return avg;
}

void end()
{
    exit(0);
}