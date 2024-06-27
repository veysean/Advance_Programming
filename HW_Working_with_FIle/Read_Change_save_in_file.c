#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[50];
    int count = 0;
    int array[50];

    // Read data from file
    FILE *myFile;
    myFile = fopen("Data.txt", "r");

    if (NULL == myFile)
    {
        printf("Files can't be opend\n");
        return 1;
    }

    printf("This file contain.\n");

    while (fgets(ch, 50, myFile))
    {
        printf("%s", ch);
        array[count] = atoi(ch);
        count++;
    }
    printf("\n");
    fclose(myFile);

    // Change index 2 to 111
    array[2] = 111;

    printf("Array: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // save data to file
    FILE *Output_File;
    Output_File = fopen("Data.txt", "w");

    if (Output_File == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(Output_File, "%d ", array[i]);
    }

    fclose(Output_File);
    return 0;
}