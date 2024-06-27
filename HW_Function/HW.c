#include <stdio.h>

// Read data from file to array
void readData(int array[], int size)
{
    FILE *file = fopen("Text.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < size; i++)
    {
        fscanf(file, "%d", &array[i]);
    }

    fclose(file);
}

// Write file from array to file
void writeData(int array[], int size)
{
    FILE *file = fopen("text.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < size; i++)
    {
        fprintf(file, "%d\n", array[i]);
    }

    fclose(file);
}

int main()
{
    int dataArray[10];

    readData(dataArray, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", dataArray[i]);
    }
    dataArray[2] = 10;
    writeData(dataArray, 10);

    return 0;
}