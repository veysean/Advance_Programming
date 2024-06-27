#include <stdio.h>

// Function to add an element to the array
void addElement(int arr[], int *size)
{
    if (*size < 100)
    {
        printf("Enter an integer value: ");
        scanf("%d", &arr[*size]);
        (*size)++;
        printf("Element added successfully!\n");
    }
    else
    {
        printf("Array is full. Cannot add more elements.\n");
    }
}

// Function to print the array
void printArray(int arr[], int size)
{
    printf("Array elements (user-added):\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to sort the array (using bubble sort)
void sortArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array sorted successfully!\n");
}

// Function to search for a number in the sorted array
void searchNumber(int arr[], int size)
{
    int target;
    printf("Enter a number to search: ");
    scanf("%d", &target);

    // Binary search (assuming the array is sorted)
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            printf("%d found at index %d.\n", target, mid);
            return;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    printf("%d not found in the array.\n", target);
}

int main()
{
    int userArray[100];
    int arraySize = 0;
    int choice;

    do
    {
        printf("\nMenu:\n");
        printf("1. Add an element\n");
        printf("2. Print the array\n");
        printf("3. Sort the array\n");
        printf("4. Search for a number\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addElement(userArray, &arraySize);
            break;
        case 2:
            printArray(userArray, arraySize);
            break;
        case 3:
            sortArray(userArray, arraySize);
            break;
        case 4:
            searchNumber(userArray, arraySize);
            break;
        case 5:
            printf("Exiting. Have a great day!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}